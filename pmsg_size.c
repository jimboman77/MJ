static int pmsg_size[] = {
0,
-(int)sizeof(PMsgSaveStateMsg),
-(int)sizeof(PMsgLoadStateMsg),
0,
0,
0,
0,
0,
0,
0,
-(int)sizeof(PMsgConnectMsg),
(int)sizeof(PMsgRequestReconnectMsg),
-(int)sizeof(PMsgAuthInfoMsg),
-(int)sizeof(PMsgNewAuthInfoMsg),
(int)sizeof(PMsgDisconnectMsg),
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
(int)sizeof(PMsgDeclareSpecialMsg),
0,
0,
-(int)sizeof(PMsgRequestPauseMsg),
(int)sizeof(PMsgReadyMsg),
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
(int)sizeof(PMsgDiscardMsg),
(int)sizeof(PMsgNoClaimMsg),
0,
0,
0,
0,
0,
0,
0,
0,
(int)sizeof(PMsgPungMsg),
0,
(int)sizeof(PMsgFormClosedPungMsg),
0,
0,
0,
0,
0,
0,
0,
(int)sizeof(PMsgKongMsg),
0,
0,
0,
0,
0,
0,
0,
0,
0,
(int)sizeof(PMsgDeclareClosedKongMsg),
(int)sizeof(PMsgAddToPungMsg),
0,
0,
0,
0,
0,
(int)sizeof(PMsgQueryMahJongMsg),
0,
0,
(int)sizeof(PMsgChowMsg),
0,
(int)sizeof(PMsgFormClosedChowMsg),
0,
0,
0,
0,
0,
0,
(int)sizeof(PMsgDeclareWashOutMsg),
(int)sizeof(PMsgMahJongMsg),
0,
(int)sizeof(PMsgPairMsg),
(int)sizeof(PMsgFormClosedPairMsg),
0,
(int)sizeof(PMsgShowTilesMsg),
(int)sizeof(PMsgSpecialSetMsg),
(int)sizeof(PMsgFormClosedSpecialSetMsg),
0,
0,
-(int)sizeof(PMsgSetPlayerOptionMsg),
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
-(int)sizeof(PMsgSetGameOptionMsg),
(int)sizeof(PMsgQueryGameOptionMsg),
(int)sizeof(PMsgListGameOptionsMsg),
0,
0,
0,
0,
0,
0,
0,
(int)sizeof(PMsgChangeManagerMsg),
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
-(int)sizeof(PMsgSendMessageMsg),
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
(int)sizeof(PMsgSwapTileMsg),
};

int pmsg_size_of(PlayerMsgType t) { return pmsg_size[t]; }

PMsgMsg *pmsg_deepcopy(PMsgMsg *m) {
  PMsgMsg *n;
  int size;
  char *mc,*nc;

  size = pmsg_size_of(m->type);
  if ( size < 0 ) size *= -1;
  n = (PMsgMsg *)malloc(size);
  if ( ! n ) return n;

  memcpy((void *)n,(const void *)m,size);
  switch ( m->type ) {
  case PMsgNewAuthInfo:
    mc = ((PMsgNewAuthInfoMsg *)m)->authdata;
    if ( mc ) {
      nc = (char *)malloc(strlen(mc)+1);
      if ( ! nc ) return NULL;
      strcpy(nc,mc);
    } else {
      nc = NULL;
    }
    ((PMsgNewAuthInfoMsg *)n)->authdata = nc;
    break;
  case PMsgAuthInfo:
    mc = ((PMsgAuthInfoMsg *)m)->authdata;
    if ( mc ) {
      nc = (char *)malloc(strlen(mc)+1);
      if ( ! nc ) return NULL;
      strcpy(nc,mc);
    } else {
      nc = NULL;
    }
    ((PMsgAuthInfoMsg *)n)->authdata = nc;
    break;
  case PMsgSendMessage:
    mc = ((PMsgSendMessageMsg *)m)->text;
    if ( mc ) {
      nc = (char *)malloc(strlen(mc)+1);
      if ( ! nc ) return NULL;
      strcpy(nc,mc);
    } else {
      nc = NULL;
    }
    ((PMsgSendMessageMsg *)n)->text = nc;
    break;
  case PMsgSetGameOption:
    mc = ((PMsgSetGameOptionMsg *)m)->optvalue;
    if ( mc ) {
      nc = (char *)malloc(strlen(mc)+1);
      if ( ! nc ) return NULL;
      strcpy(nc,mc);
    } else {
      nc = NULL;
    }
    ((PMsgSetGameOptionMsg *)n)->optvalue = nc;
    break;
  case PMsgSaveState:
    mc = ((PMsgSaveStateMsg *)m)->filename;
    if ( mc ) {
      nc = (char *)malloc(strlen(mc)+1);
      if ( ! nc ) return NULL;
      strcpy(nc,mc);
    } else {
      nc = NULL;
    }
    ((PMsgSaveStateMsg *)n)->filename = nc;
    break;
  case PMsgSetPlayerOption:
    mc = ((PMsgSetPlayerOptionMsg *)m)->text;
    if ( mc ) {
      nc = (char *)malloc(strlen(mc)+1);
      if ( ! nc ) return NULL;
      strcpy(nc,mc);
    } else {
      nc = NULL;
    }
    ((PMsgSetPlayerOptionMsg *)n)->text = nc;
    break;
  case PMsgLoadState:
    mc = ((PMsgLoadStateMsg *)m)->filename;
    if ( mc ) {
      nc = (char *)malloc(strlen(mc)+1);
      if ( ! nc ) return NULL;
      strcpy(nc,mc);
    } else {
      nc = NULL;
    }
    ((PMsgLoadStateMsg *)n)->filename = nc;
    break;
  case PMsgRequestPause:
    mc = ((PMsgRequestPauseMsg *)m)->reason;
    if ( mc ) {
      nc = (char *)malloc(strlen(mc)+1);
      if ( ! nc ) return NULL;
      strcpy(nc,mc);
    } else {
      nc = NULL;
    }
    ((PMsgRequestPauseMsg *)n)->reason = nc;
    break;
  case PMsgConnect:
    mc = ((PMsgConnectMsg *)m)->name;
    if ( mc ) {
      nc = (char *)malloc(strlen(mc)+1);
      if ( ! nc ) return NULL;
      strcpy(nc,mc);
    } else {
      nc = NULL;
    }
    ((PMsgConnectMsg *)n)->name = nc;
    break;
  default:
      ;
  }
  return n;
}

void pmsg_deepfree(PMsgMsg *m) {
  switch ( m->type ) {
  case PMsgNewAuthInfo:
    if ( ((PMsgNewAuthInfoMsg *)m)->authdata )
      free((void *)((PMsgNewAuthInfoMsg *)m)->authdata);
    break;
  case PMsgAuthInfo:
    if ( ((PMsgAuthInfoMsg *)m)->authdata )
      free((void *)((PMsgAuthInfoMsg *)m)->authdata);
    break;
  case PMsgSendMessage:
    if ( ((PMsgSendMessageMsg *)m)->text )
      free((void *)((PMsgSendMessageMsg *)m)->text);
    break;
  case PMsgSetGameOption:
    if ( ((PMsgSetGameOptionMsg *)m)->optvalue )
      free((void *)((PMsgSetGameOptionMsg *)m)->optvalue);
    break;
  case PMsgSaveState:
    if ( ((PMsgSaveStateMsg *)m)->filename )
      free((void *)((PMsgSaveStateMsg *)m)->filename);
    break;
  case PMsgSetPlayerOption:
    if ( ((PMsgSetPlayerOptionMsg *)m)->text )
      free((void *)((PMsgSetPlayerOptionMsg *)m)->text);
    break;
  case PMsgLoadState:
    if ( ((PMsgLoadStateMsg *)m)->filename )
      free((void *)((PMsgLoadStateMsg *)m)->filename);
    break;
  case PMsgRequestPause:
    if ( ((PMsgRequestPauseMsg *)m)->reason )
      free((void *)((PMsgRequestPauseMsg *)m)->reason);
    break;
  case PMsgConnect:
    if ( ((PMsgConnectMsg *)m)->name )
      free((void *)((PMsgConnectMsg *)m)->name);
    break;
  default:
      ;
  }
  free((void *)m);
}

