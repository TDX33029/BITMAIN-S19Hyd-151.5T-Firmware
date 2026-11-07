// FUN_0076ae18 @ 0076ae18 size=256 calls_out=5 calls_in=0
// strings: 

void FUN_0076ae18(undefined4 *param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  int local_160;
  ushort *local_15c;
  ushort *local_e8;
  undefined1 auStack_e4 [192];
  
  uVar6 = *(undefined8 *)(param_2 + 0x158);
  iVar5 = *(int *)(param_2 + 0x160);
  while( true ) {
    iVar3 = (int)((ulonglong)uVar6 >> 0x20);
    uVar4 = (undefined4)uVar6;
    (**(code **)(iVar3 + 0xc))(&local_160,uVar4,param_3);
    if (local_160 != -0x80000000) {
      FUN_01bed4e2(param_1,&local_160,0x74);
      return;
    }
    local_e8 = local_15c;
    if (iVar5 == 0) break;
    uVar1 = *local_15c;
    sVar2 = 7;
    if (1 < uVar1) {
      sVar2 = uVar1 - 2;
    }
    if (sVar2 == 0x10 || sVar2 == 0x13) break;
    if (uVar1 != 3) {
      iVar5 = iVar5 + -1;
      *(int *)(param_2 + 0x160) = iVar5;
    }
    FUN_00761ec0(auStack_e4,param_2 + 0x98);
    uVar6 = FUN_0076af44(param_2,auStack_e4);
    FUN_01139b38(uVar4,iVar3);
    *(undefined8 *)(param_2 + 0x158) = uVar6;
    FUN_00769758(&local_e8);
  }
  *param_1 = 0x80000000;
  param_1[1] = local_15c;
  return;
}

