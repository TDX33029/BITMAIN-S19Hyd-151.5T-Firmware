// FUN_0150fd5c @ 0150fd5c size=256 calls_out=3 calls_in=0
// strings: 

bool FUN_0150fd5c(int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  uint local_48 [3];
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  bVar4 = true;
  if (*param_2 == '\x05') {
    local_48[2] = *(uint *)(param_2 + 4);
    local_3c = *(undefined4 *)(param_2 + 8);
    iVar10 = *(int *)(param_1 + 8);
    local_28 = *(undefined4 *)(param_2 + 0xc);
    iVar7 = *(int *)(param_1 + 4);
    if (local_48[2] == 0) {
      local_28 = 0;
    }
    local_48[0] = (uint)(local_48[2] != 0);
    local_34 = 0;
    local_48[1] = 0;
    local_38 = local_48[0];
    local_30 = local_48[2];
    local_2c = local_3c;
    do {
      uVar11 = FUN_01a41998(local_48);
      iVar1 = (int)uVar11;
      if (iVar1 == 0) break;
      iVar3 = param_1;
      if (iVar10 != 0) {
        uVar5 = *(undefined4 *)(iVar1 + 4);
        iVar6 = *(int *)(iVar1 + 8);
        iVar8 = iVar10 << 5;
        iVar9 = iVar7;
        do {
          if ((*(int *)(iVar9 + 8) == iVar6) &&
             (iVar2 = thunk_FUN_01bed842(*(undefined4 *)(iVar9 + 4),uVar5,iVar6), iVar3 = iVar9,
             iVar2 == 0)) break;
          iVar9 = iVar9 + 0x20;
          iVar8 = iVar8 + -0x20;
          iVar3 = param_1;
        } while (iVar8 != 0);
      }
      iVar3 = FUN_01577618(iVar3 + 0xc,(int)((ulonglong)uVar11 >> 0x20),param_3);
    } while (iVar3 != 0);
    bVar4 = iVar1 == 0;
  }
  return bVar4;
}

