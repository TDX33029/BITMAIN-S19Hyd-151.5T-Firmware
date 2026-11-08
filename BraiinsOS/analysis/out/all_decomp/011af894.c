// FUN_011af894 @ 011af894 size=304 calls_out=3 calls_in=0
// strings: 

int FUN_011af894(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  uint local_58 [3];
  undefined4 uStack_4c;
  uint local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if (*param_2 != '\x05') {
    return 0;
  }
  local_58[2] = *(uint *)(param_2 + 4);
  uStack_4c = *(undefined4 *)(param_2 + 8);
  local_38 = *(undefined4 *)(param_2 + 0xc);
  iVar2 = *(int *)(param_1 + 4);
  iVar5 = *(int *)(param_1 + 8);
  if (local_58[2] == 0) {
    local_38 = 0;
  }
  local_58[1] = 0;
  local_58[0] = (uint)(local_58[2] != 0);
  local_44 = 0;
  local_48 = local_58[0];
  local_40 = local_58[2];
  local_3c = uStack_4c;
  if (iVar5 == 0) {
    do {
      iVar2 = FUN_00f45584(local_58);
    } while (iVar2 != 0);
  }
  else {
    while( true ) {
      uVar10 = FUN_00f45584(local_58);
      iVar3 = (int)uVar10;
      if (iVar3 == 0) break;
      iVar6 = iVar2 + 4;
      iVar9 = iVar5 * 0x18;
      do {
        uVar7 = *(undefined4 *)(iVar3 + 4);
        uVar8 = *(undefined4 *)(iVar3 + 8);
        cVar1 = FUN_011af09c(*(int *)(iVar6 + -4) + 8,uVar7,uVar8);
        if (cVar1 != '\0') {
          local_34 = 0x80000000;
          local_30 = uVar7;
          local_2c = uVar8;
          local_28 = param_3;
          iVar4 = FUN_011d018c(iVar6,(int)((ulonglong)uVar10 >> 0x20),&local_34,param_4,param_5);
          if (iVar4 != 0) {
            return iVar4;
          }
        }
        iVar6 = iVar6 + 0x18;
        iVar9 = iVar9 + -0x18;
      } while (iVar9 != 0);
    }
  }
  return 0;
}

