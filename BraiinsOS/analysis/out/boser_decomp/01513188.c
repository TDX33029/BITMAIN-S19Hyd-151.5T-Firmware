// FUN_01513188 @ 01513188 size=236 calls_out=3 calls_in=0
// strings: 

bool FUN_01513188(int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  uint local_48 [3];
  undefined4 uStack_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  bVar7 = true;
  if (*param_2 == '\x05') {
    iVar9 = *(int *)(param_1 + 8);
    local_48[2] = *(uint *)(param_2 + 4);
    uStack_3c = *(undefined4 *)(param_2 + 8);
    iVar1 = *(int *)(param_1 + 4);
    local_28 = *(undefined4 *)(param_2 + 0xc);
    if (local_48[2] == 0) {
      local_28 = 0;
    }
    local_48[1] = 0;
    local_48[0] = (uint)(local_48[2] != 0);
    local_34 = 0;
    local_38 = local_48[0];
    local_30 = local_48[2];
    local_2c = uStack_3c;
    while( true ) {
      uVar10 = FUN_01a41998(local_48);
      iVar2 = (int)uVar10;
      if (iVar2 == 0 || iVar9 == 0) break;
      uVar6 = *(undefined4 *)(iVar2 + 4);
      iVar8 = *(int *)(iVar2 + 8);
      iVar4 = iVar1;
      iVar5 = iVar9 << 5;
      while ((*(int *)(iVar4 + 8) != iVar8 ||
             (iVar3 = thunk_FUN_01bed842(*(undefined4 *)(iVar4 + 4),uVar6,iVar8), iVar3 != 0))) {
        iVar4 = iVar4 + 0x20;
        iVar5 = iVar5 + -0x20;
        if (iVar5 == 0) goto LAB_01513260;
      }
      iVar4 = FUN_01577618(iVar4 + 0xc,(int)((ulonglong)uVar10 >> 0x20),param_3);
      if (iVar4 == 0) break;
    }
LAB_01513260:
    bVar7 = iVar2 == 0;
  }
  return bVar7;
}

