// FUN_008c55bc @ 008c55bc size=544 calls_out=8 calls_in=0
// strings: 

undefined4 FUN_008c55bc(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint local_80;
  int local_7c;
  uint local_78;
  uint *local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint *local_38;
  code *local_34;
  int local_30;
  
  local_48 = *param_1;
  local_44 = 0;
  local_40 = 0;
  local_34 = (code *)0x0;
  local_38 = (uint *)0x0;
  local_30 = 0;
  FUN_015f3c24(&local_80,&local_48,&local_38);
  iVar7 = local_70;
  uVar8 = local_78;
  if ((local_80 & 1) != 0) {
    if (local_70 == 0) {
      uVar8 = -local_78;
      iVar7 = 0;
      local_74 = (uint *)-((int)local_74 + (uint)(local_78 != 0));
    }
    else {
      uVar8 = ~local_78;
      iVar7 = (int)&DAT_3b9aca00 - local_70;
      local_74 = (uint *)~(uint)local_74;
    }
  }
  uVar10 = FUN_01846048(uVar8,local_74,0x15180,0);
  lVar2 = (uVar10 & 0xffffffff) * 0x15180;
  uVar6 = (uint)lVar2;
  local_7c = uVar8 - uVar6;
  iVar9 = (int)local_74 -
          ((int)(uVar10 >> 0x20) * 0x15180 + (int)((ulonglong)lVar2 >> 0x20) + (uint)(uVar8 < uVar6)
          );
  iVar1 = iVar9 >> 0x1f;
  lVar2 = uVar10 + CONCAT44(iVar1,iVar1);
  uVar8 = (uint)lVar2;
  if (((int)((ulonglong)lVar2 >> 0x20) - (uint)(uVar8 < 0x7ff506c5) != -1) ||
     (local_80 = FUN_00f6b330(uVar8 + 0xaf93b,0xaf93b,uVar8 + 0x800af93b), local_80 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0035d71c,0x25,&DAT_0188028c);
  }
  if (iVar9 < 0) {
    local_7c = local_7c + 0x15180;
  }
  local_78 = iVar7;
  FUN_00f6bd20(&local_48,&local_80,0);
  uVar4 = local_40;
  uVar3 = local_44;
  uVar5 = local_48;
  local_30 = 0;
  local_34 = (code *)0x1;
  local_38 = (uint *)0x0;
  FUN_008cf370(&local_38,0,3,1,1);
  *(undefined2 *)((int)local_34 + local_30) = 0x5455;
  *(undefined1 *)((undefined2 *)((int)local_34 + local_30) + 1) = 0x43;
  local_5c = 4;
  local_74 = local_38;
  local_6c = local_30 + 3;
  local_50 = uVar5;
  local_54 = 0;
  local_58 = 0;
  local_60 = 0x14;
  local_68 = 0;
  local_78 = uVar4;
  local_7c = uVar3;
  local_70 = (int)local_34;
  local_80 = 1;
  local_64 = &DAT_003457ed;
  local_34 = FUN_008bf250;
  local_38 = &local_80;
  uVar5 = FUN_00fa948c(*param_2,param_2[1],&DAT_00590e71,&local_38);
  if (((uint)local_74 & 0x7fffffff) == 0) {
    return uVar5;
  }
  thunk_FUN_016d3fb4(local_70);
  return uVar5;
}

