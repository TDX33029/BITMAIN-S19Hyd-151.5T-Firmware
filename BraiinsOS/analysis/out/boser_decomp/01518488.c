// FUN_01518488 @ 01518488 size=364 calls_out=3 calls_in=0
// strings: 

byte FUN_01518488(int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  int iVar12;
  undefined8 uVar13;
  uint local_48 [3];
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  
  bVar11 = 1;
  if (*param_2 == '\x05') {
    local_28 = *(int *)(param_2 + 0xc);
    if (local_28 == 0) {
      bVar11 = 0;
    }
    else {
      local_48[2] = *(uint *)(param_2 + 4);
      iVar7 = *(int *)(param_1 + 8);
      iVar9 = *(int *)(param_1 + 4);
      if (local_48[2] == 0) {
        local_28 = 0;
      }
      local_48[0] = (uint)(local_48[2] != 0);
      uVar5 = *(undefined4 *)(param_1 + 0x10);
      iVar1 = *(int *)(param_1 + 0x14);
      local_3c = *(undefined4 *)(param_2 + 8);
      local_34 = 0;
      bVar4 = 0;
      local_48[1] = 0;
      local_38 = local_48[0];
      local_30 = local_48[2];
      local_2c = local_3c;
      while( true ) {
        uVar13 = FUN_01a41998(local_48);
        iVar3 = (int)uVar13;
        bVar11 = bVar4;
        if ((iVar3 == 0) || (bVar11 = 0, iVar7 == 0)) break;
        uVar6 = *(undefined4 *)(iVar3 + 4);
        iVar8 = *(int *)(iVar3 + 8);
        iVar10 = iVar9;
        iVar12 = iVar7 << 5;
        while ((*(int *)(iVar10 + 8) != iVar8 ||
               (iVar2 = thunk_FUN_01bed842(*(undefined4 *)(iVar10 + 4),uVar6,iVar8), iVar2 != 0))) {
          iVar10 = iVar10 + 0x20;
          iVar12 = iVar12 + -0x20;
          if (iVar12 == 0) {
            return 0;
          }
        }
        iVar10 = FUN_01577618(iVar10 + 0xc,(int)((ulonglong)uVar13 >> 0x20),param_3);
        if (iVar10 == 0) {
          return 0;
        }
        if (*(int *)(iVar3 + 8) == iVar1) {
          iVar3 = thunk_FUN_01bed842(*(undefined4 *)(iVar3 + 4),uVar5,iVar1);
          bVar4 = iVar3 == 0 | bVar4;
        }
      }
    }
  }
  return bVar11;
}

