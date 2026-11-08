// FUN_00f7e5b4 @ 00f7e5b4 size=432 calls_out=4 calls_in=3
// strings: 

undefined4 FUN_00f7e5b4(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint local_70 [5];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar8 = *param_2;
  *param_2 = 2;
  if (iVar8 != 2) {
    iVar2 = param_2[1];
    iVar3 = param_2[5];
    iVar5 = param_2[6];
    uVar6 = param_2[7];
    iVar7 = *(int *)(*(int *)(param_1 + 8) + 0x48);
    iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x4c) * 0x134;
    while( true ) {
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_0035e2fc,99,&DAT_01880364);
      }
      if ((*(int *)(iVar7 + 0x118) == iVar5) &&
         (iVar1 = thunk_FUN_016dd50a(*(undefined4 *)(iVar7 + 0x114),iVar3,iVar5), iVar1 == 0))
      break;
      iVar7 = iVar7 + 0x134;
      iVar4 = iVar4 + -0x134;
    }
    local_70[0] = param_2[2];
    local_70[1] = param_2[3];
    local_70[2] = param_2[4];
    FUN_00f7cacc(&local_48,param_1,uVar6 & 0xff,2,iVar7,local_70,iVar8,iVar2,param_2);
    if (local_48 == 0x80000009) {
      return local_44;
    }
    local_70[0] = local_48;
    local_70[1] = local_44;
    local_70[2] = uStack_40;
    local_70[3] = iStack_3c;
    local_70[4] = local_38;
    uStack_5c = uStack_34;
    uStack_58 = uStack_30;
    uStack_54 = uStack_2c;
    uStack_50 = uStack_28;
    uVar6 = 4;
    iVar8 = 4;
    if ((int)local_48 < 0) {
      uVar6 = local_48 ^ 0x80000000;
    }
    if (1 < uVar6 - 6) {
      if (uVar6 == 4) {
        if (local_48 != 0) {
          thunk_FUN_016d3fb4(local_44);
        }
        iVar8 = 0x18;
        if (local_70[3] != 0) {
          thunk_FUN_016d3fb4(local_70[4]);
        }
      }
      else if (uVar6 != 0) {
        return 0;
      }
    }
    if (*(int *)((int)local_70 + iVar8) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)((int)local_70 + iVar8 + 4));
      return 0;
    }
  }
  return 0;
}

