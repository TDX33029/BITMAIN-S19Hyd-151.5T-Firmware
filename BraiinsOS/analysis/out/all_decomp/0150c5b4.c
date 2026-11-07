// FUN_0150c5b4 @ 0150c5b4 size=656 calls_out=4 calls_in=0
// strings: 

void FUN_0150c5b4(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int *piStack_48;
  int iStack_44;
  undefined1 local_3c [16];
  int *local_2c;
  int local_28;
  
  iVar3 = param_3[2];
  iVar1 = iVar3;
  if ((uint)(*param_3 - iVar3) < 2) {
    FUN_0154e5f8(param_3,iVar3,2,1,1);
    iVar1 = param_3[2];
  }
  param_3[2] = iVar1 + 2;
  *(undefined2 *)(param_3[1] + iVar1) = 0xffff;
  local_58 = 0x19191919;
  local_54 = 0x19191919;
  local_50 = 0x19191919;
  local_4c = 0x19191919;
  piStack_48 = param_3;
  iStack_44 = iVar3;
  if (param_2 != 0) {
    puVar4 = (uint *)(param_1 + 8);
    param_2 = param_2 << 4;
    do {
      if (puVar4[-2] == 0x80000001) {
        iVar1 = param_3[2];
        if ((uint)(*param_3 - iVar1) < 2) {
          FUN_0154e5f8(param_3,iVar1,2,1,1);
          iVar1 = param_3[2];
        }
        iVar3 = iVar1 + 2;
        param_3[2] = iVar3;
        *(undefined2 *)(param_3[1] + iVar1) = 0x2a00;
        iVar1 = iVar3;
        if ((uint)(*param_3 - iVar3) < 2) {
          FUN_0154e5f8(param_3,iVar3,2,1,1);
          iVar1 = param_3[2];
        }
        iVar2 = iVar1 + 2;
        uVar5 = puVar4[-1];
        *(undefined2 *)(param_3[1] + iVar1) = 0xffff;
        param_3[2] = iVar2;
        local_3c[0] = 0x19;
        local_2c = param_3;
        local_28 = iVar3;
        if ((uint)(*param_3 - iVar2) < 4) {
          FUN_0154e5f8(param_3,iVar2,4,1,1);
          iVar2 = param_3[2];
        }
        *(uint *)(param_3[1] + iVar2) =
             uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
             uVar5 >> 0x18;
        iVar2 = iVar2 + 4;
      }
      else {
        FUN_0152ab04((short)puVar4[1],*(undefined2 *)((int)puVar4 + 6),param_3);
        iVar3 = param_3[2];
        iVar1 = iVar3;
        if ((uint)(*param_3 - iVar3) < 2) {
          FUN_0154e5f8(param_3,iVar3,2,1,1);
          iVar1 = param_3[2];
        }
        iVar2 = iVar1 + 2;
        uVar5 = puVar4[-1];
        uVar6 = *puVar4;
        param_3[2] = iVar2;
        *(undefined2 *)(param_3[1] + iVar1) = 0xffff;
        local_3c[0] = 0x19;
        local_2c = param_3;
        local_28 = iVar3;
        if ((uint)(*param_3 - iVar2) < uVar6) {
          FUN_0154e5f8(param_3,iVar2,uVar6,1,1);
          iVar2 = param_3[2];
        }
        FUN_016dd1aa(param_3[1] + iVar2,uVar5,uVar6);
        iVar2 = iVar2 + uVar6;
      }
      param_3[2] = iVar2;
      FUN_0152f8f8(local_3c);
      puVar4 = puVar4 + 4;
      param_2 = param_2 + -0x10;
    } while (param_2 != 0);
  }
  FUN_0152f8f8(&local_58);
  return;
}

