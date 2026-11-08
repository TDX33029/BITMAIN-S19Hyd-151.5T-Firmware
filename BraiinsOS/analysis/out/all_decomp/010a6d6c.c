// FUN_010a6d6c @ 010a6d6c size=796 calls_out=8 calls_in=3
// strings: 

void FUN_010a6d6c(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  int local_80;
  int local_7c;
  int local_78;
  undefined4 local_74;
  uint *local_70;
  code *local_6c;
  uint *local_68;
  code *local_64;
  undefined2 local_60 [12];
  int local_48;
  int local_44;
  int local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  uVar10 = CONCAT44(param_4,param_3);
  if (param_4 < 0xde0b6b4 && (uint)(0xa763ffff < param_3) <= param_4 + 0xf21f494d) {
    iVar2 = 1;
    puVar9 = (undefined4 *)0x0;
    iVar4 = 0x14;
    local_74 = 1;
    local_78 = 0;
    local_7c = 0;
    local_80 = 1;
    if (param_4 != 0 || param_4 < (9999 < param_3)) goto LAB_010a6e0c;
    if ((uint)(param_3 < 100) <= -param_4) goto LAB_010a6eb4;
LAB_010a6f3c:
    uVar3 = (uint)((ulonglong)uVar10 >> 0x20);
    uVar1 = (uint)uVar10;
    if (uVar3 != 0 || uVar3 < (9 < uVar1)) goto LAB_010a6efc;
LAB_010a6f4c:
    iVar5 = iVar4 + -1;
    *(byte *)((int)local_60 + iVar4 + -0x11) = (byte)uVar1 | 0x30;
    puVar7 = (undefined4 *)(0x14 - iVar5);
    local_40 = 0;
    if (puVar7 <= puVar9) goto LAB_010a6f88;
  }
  else {
    puVar9 = (undefined4 *)0x14;
    local_80 = thunk_FUN_016d4a50(0x14,param_3 + 0x589c0000);
    if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x14);
    }
    local_78 = 0x14;
LAB_010a6e0c:
    iVar2 = local_80;
    local_74 = 1;
    local_7c = 0;
    iVar5 = 0;
    do {
      iVar4 = iVar5;
      iVar6 = (int)((ulonglong)uVar10 >> 0x20);
      uVar8 = (uint)uVar10;
      uVar10 = FUN_01846088(uVar8,iVar6,10000,0);
      param_3 = (uint)uVar10;
      uVar3 = uVar8 + param_3 * -10000;
      uVar1 = (uint)((short)((uVar3 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)local_60 + iVar4) = *(undefined2 *)(&DAT_0040f4ca + uVar1 * 2);
      *(undefined2 *)((int)local_60 + iVar4 + 2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar3 + uVar1 * -100 & 0xffff) * 2);
      iVar5 = iVar4 + -4;
    } while ((uint)(uVar8 < 100000000) <= (uint)-iVar6);
    iVar4 = iVar4 + 0x10;
    if ((uint)-(int)((ulonglong)uVar10 >> 0x20) < (uint)(param_3 < 100)) goto LAB_010a6f3c;
LAB_010a6eb4:
    iVar5 = iVar4 + -2;
    uVar1 = (uint)((short)((param_3 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)((int)local_60 + iVar4 + -0x12) =
         *(undefined2 *)(&DAT_0040f4ca + (param_3 + uVar1 * -100 & 0xffff) * 2);
    iVar4 = iVar5;
    if (uVar1 < 10) goto LAB_010a6f4c;
LAB_010a6efc:
    iVar5 = iVar4 + -2;
    *(undefined2 *)((int)local_60 + iVar4 + -0x12) = *(undefined2 *)(&DAT_0040f4ca + uVar1 * 2);
    puVar7 = (undefined4 *)(0x14 - iVar5);
    local_40 = 0;
    if (puVar7 <= puVar9) goto LAB_010a6f88;
  }
  FUN_00f5f538(&local_80,puVar7);
  puVar9 = (undefined4 *)(local_78 - local_7c);
  iVar2 = local_80;
  local_40 = local_7c;
LAB_010a6f88:
  FUN_016dd1aa(iVar2 + local_40,(int)local_60 + iVar5 + -0x10,puVar7);
  uVar1 = local_74;
  if (puVar9 < puVar7) {
    local_3c = puVar7;
    local_38 = puVar9;
                    /* WARNING: Subroutine does not return */
    FUN_00f600c0(&local_3c);
  }
  local_40 = local_40 + (int)puVar7;
  if ((local_74 & 1) == 0) {
    local_3c = &DAT_018ad580;
  }
  else {
    local_40 = local_40 + (local_74 >> 5);
    local_44 = local_80 - (local_74 >> 5);
    local_48 = local_78 + (local_74 >> 5);
    FUN_00f5ef18(&local_3c,&local_48);
    local_2c = uVar1 >> 5;
    if (local_34 < uVar1 >> 5) {
      local_68 = &local_28;
      local_28 = local_34;
      local_64 = FUN_007883b8;
      local_6c = FUN_007883b8;
      local_70 = &local_2c;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00584155,&local_70,&DAT_018a6700);
    }
    local_40 = local_34 - local_2c;
    local_80 = (int)local_38 + local_2c;
    local_74 = local_30;
  }
  *param_1 = local_3c;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[1] = local_80;
  param_1[2] = local_40;
  param_1[3] = local_74;
  return;
}

