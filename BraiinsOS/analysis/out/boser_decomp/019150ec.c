// FUN_019150ec @ 019150ec size=536 calls_out=4 calls_in=6
// strings: 

void FUN_019150ec(uint *param_1,int param_2,undefined4 param_3,code *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int local_24c [129];
  uint local_48;
  undefined1 auStack_44 [12];
  int *local_38;
  code *local_34;
  uint *local_30;
  code *local_2c;
  
  uVar10 = *(uint *)(param_2 + 0x14);
  if (uVar10 == 0) {
    *(undefined1 *)param_1 = 4;
    param_1[1] = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x18);
    iVar6 = 0;
    do {
      local_24c[iVar6 * 2] = 1;
      iVar4 = iVar6 + 1;
      local_24c[iVar6 * 2 + 1] = 0;
      iVar6 = iVar4;
    } while (iVar4 != 0x40);
    uVar3 = *(uint *)(param_2 + 8);
    uVar9 = *(uint *)(param_2 + 0x10);
    uVar2 = uVar9 - uVar3;
    if (uVar9 < uVar3) {
      uVar2 = uVar9;
    }
    uVar9 = uVar3 - uVar2;
    iVar6 = uVar10 - uVar9;
    if (uVar10 < uVar9) {
      iVar6 = 0;
    }
    if (uVar10 <= uVar9) {
      uVar3 = uVar2 + uVar10;
    }
    uVar9 = (uVar3 - uVar2) * 0xc >> 2;
    uVar7 = uVar9 * -0x55555555 + iVar6;
    uVar3 = 0x40;
    if (uVar7 < 0x40) {
      uVar3 = uVar7;
    }
    if (uVar7 != 0) {
      iVar6 = *(int *)(param_2 + 0xc) + uVar2 * 0xc;
      iVar4 = *(int *)(param_2 + 0xc) + uVar9 * -4;
      uVar2 = 0;
      do {
        iVar8 = iVar4;
        if (uVar2 < uVar9 * -0x55555555) {
          iVar8 = iVar6;
        }
        uVar7 = *(uint *)(iVar8 + 8);
        if (uVar7 < uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar1,uVar7,uVar7,&DAT_01d252cc);
        }
        iVar6 = iVar6 + 0xc;
        iVar4 = iVar4 + 0xc;
        local_24c[uVar2 * 2] = *(int *)(iVar8 + 4) + uVar1;
        uVar5 = uVar2 + 1;
        local_24c[uVar2 * 2 + 1] = uVar7 - uVar1;
        uVar1 = 0;
        uVar2 = uVar5;
      } while (uVar3 != uVar5);
    }
    uVar1 = 0x40;
    if (uVar10 < 0x40) {
      uVar1 = uVar10;
    }
    (*param_4)(&local_38,param_3,local_24c,uVar1);
    if (((char)local_38 == '\x04') || (((uint)local_38 & 0xff) == 4)) {
      local_48 = 0;
      local_24c[0x80] = (int)local_34;
      uVar10 = 0;
      do {
        uVar2 = uVar10 + 1;
        local_48 = local_24c[uVar10 * 2 + 1] + local_48;
        uVar10 = uVar2;
      } while (uVar1 != uVar2);
      if (local_48 < local_34) {
        FUN_01914fcc(param_2);
        local_30 = &local_48;
        local_2c = FUN_012fd02c;
        local_34 = FUN_012fd02c;
        local_38 = local_24c + 0x80;
        FUN_00664898(auStack_44,&DAT_0058e23d,&local_38);
        FUN_01933504(param_1,auStack_44);
      }
      else {
        FUN_01914fcc(param_2,local_34);
        param_1[1] = (uint)local_34;
        *(undefined1 *)param_1 = 4;
      }
    }
    else {
      *param_1 = (uint)local_38;
      param_1[1] = (uint)local_34;
    }
  }
  return;
}

