// FUN_00040260 @ 00040260  size=644  callers=0
// program: cgminer


undefined4 FUN_00040260(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  uint __size;
  uint __size_00;
  undefined1 auStack_9e0 [252];
  undefined4 local_8e4;
  undefined4 local_8e0;
  undefined4 local_8dc;
  void *local_8c0;
  void *local_8ac;
  void *local_8a0;
  void *local_898;
  char acStack_820 [2048];
  
  if ((DAT_000686f1 != '\0') &&
     (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
    snprintf(acStack_820,0x800,"got nonce sz %d",param_2);
    FUN_0001dd98(7,acStack_820,0);
  }
  bVar1 = *param_1;
  uVar5 = *(undefined4 *)(param_1 + 1);
  memcpy(auStack_9e0,param_1 + 5,0x1c0);
  __size_00 = (uint)param_1[0x1c5];
  param_1 = param_1 + 0x1c6;
  pvVar3 = calloc(1,__size_00);
  local_8c0 = memcpy(pvVar3,param_1,__size_00);
  __size = (uint)param_1[__size_00];
  param_1 = param_1 + __size_00 + 1;
  pvVar3 = calloc(1,__size);
  local_8ac = memcpy(pvVar3,param_1,__size);
  bVar2 = param_1[__size];
  pvVar3 = calloc(1,(uint)bVar2);
  local_8a0 = memcpy(pvVar3,param_1 + __size + 1,(uint)bVar2);
  local_898 = calloc(1,1);
  local_8dc = *(undefined4 *)(DAT_00072f14 + (uint)bVar1 * 4);
  local_8e4 = *DAT_00073f30;
  local_8e0 = *(undefined4 *)*DAT_00073f30;
  iVar4 = FUN_0002b848(*DAT_00073f30,uVar5);
  if ((iVar4 == 0) || (iVar4 = FUN_0002b7dc(auStack_9e0,uVar5), iVar4 == 0)) {
    FUN_00030ec0(*DAT_00073f30);
    FUN_0002a618(auStack_9e0);
    uVar5 = 0xffffffff;
  }
  else {
    FUN_0003bfd8(*DAT_00073f30,auStack_9e0);
    if ((DAT_00072dc0 != 0) && (DAT_00072e74 != '\0')) {
      FUN_0002a8b4(auStack_9e0,uVar5);
    }
    if ((DAT_000686f1 != '\0') &&
       (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
      snprintf(acStack_820,0x800,"%s nonce submited","cb_bitmain_submit_nonce");
      FUN_0001dd98(7,acStack_820,0);
    }
    FUN_0002a618(auStack_9e0);
    uVar5 = 0;
  }
  return uVar5;
}

