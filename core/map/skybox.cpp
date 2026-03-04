/*skybox.cpp*/

#include <skybox.h>

_core::Skybox::Skybox()
{

};

_core::~Skybox::Skybox()
{

};

// Create Skybox
void* _core::Skybox::CreateSkybox( Skybox& skybox, const Vector3& scalar, const Vector4& cube, const char* pShader, const Texture& pTexture ) {
  std::size_t pSz = INT_CSG_HOLLOW;
  Component& pGet;
  skybox = ( Skybox** )malloc( sizeof( &skybox ) );
  for ( auto& i : pSz; pSz++ ) {
    // make scale
    pGet.GetAt( scalar );
    CSG_MAKE_SCALE( scalar );

    // make cube
    pGet.GetAt( cube );
    CSG_MAKE_HOLLOW( cube );

    // get shader
    pGet.GetStr( pShader );
    STREAM_PROJECT_SHADER( pShader );

    // get texture and set
    SELECT_TEXTURE( pTexture );
    SHADER_ALLOC_TEXTURE( pTexture );
  }
  
}

//destroy skybox
void* _core::Skybox::DestroySkybox( Skybox& skybox ) {
  delete *(&skybox);
}
