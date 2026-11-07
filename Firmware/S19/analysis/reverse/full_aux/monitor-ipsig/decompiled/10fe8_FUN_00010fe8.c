// FUN_00010fe8 @ 00010fe8  size=260  callers=0
// program: monitor-ipsig


undefined4 FUN_00010fe8(void)

{
  int iVar1;
  undefined4 local_14 [2];
  
  DAT_000220a4 = socket(2,2,0);
  if (DAT_000220a4 == -1) {
    printf("socket error");
    return 0xffffffff;
  }
  local_14[0] = 1;
  iVar1 = setsockopt(DAT_000220a4,1,6,local_14,4);
  if (iVar1 == -1) {
    printf("set socket error...");
    return 0xffffffff;
  }
  DAT_000220d4 = 0x9c370002;
  DAT_000220d8 = 0;
  DAT_000220dc = 0;
  DAT_000220e0 = 0;
  DAT_000220ec = 0;
  DAT_000220f0 = 0;
  DAT_000220e4 = 0x9b370002;
  DAT_000220e8 = 0xffffffff;
  iVar1 = bind(DAT_000220a4,(sockaddr *)&DAT_000220d4,0x10);
  if (iVar1 == -1) {
    printf("bind error...");
  }
  return 0;
}

