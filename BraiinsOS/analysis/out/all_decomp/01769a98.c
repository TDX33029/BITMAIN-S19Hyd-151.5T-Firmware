// FUN_01769a98 @ 01769a98 size=788 calls_out=6 calls_in=2
// strings: 

undefined8 FUN_01769a98(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  ushort *puVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  bool bVar11;
  ushort local_4c0 [84];
  ushort auStack_418 [168];
  ushort auStack_2c8 [4];
  undefined4 local_2c0 [8];
  undefined2 local_2a0;
  undefined2 local_260;
  undefined2 local_220;
  undefined2 local_1e0;
  undefined4 auStack_1c0 [4];
  undefined1 auStack_1b0 [388];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  puVar8 = local_2c0;
  do {
    if (puVar8 < param_2) {
      if (param_2 < puVar8 + 8) {
LAB_01769d68:
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0,0x1769d68);
        (*pcVar2)();
      }
    }
    else if ((puVar8 != param_2) && (puVar8 < param_2 + 8)) goto LAB_01769d68;
    puVar9 = puVar8 + 0x10;
    uVar3 = param_2[1];
    uVar6 = param_2[2];
    uVar7 = param_2[3];
    *puVar8 = *param_2;
    puVar8[1] = uVar3;
    puVar8[2] = uVar6;
    puVar8[3] = uVar7;
    uVar3 = param_2[5];
    uVar6 = param_2[6];
    uVar7 = param_2[7];
    puVar8[4] = param_2[4];
    puVar8[5] = uVar3;
    puVar8[6] = uVar6;
    puVar8[7] = uVar7;
    puVar8 = puVar9;
  } while (puVar9 != auStack_1c0);
  if (param_3 == 0) {
    local_2a0 = 0;
    local_260 = 1;
    local_220 = 2;
    local_1e0 = 0x100;
    FUN_017694a0(param_1,param_1 + 0x200,param_1 + 0x400,param_1 + 0x600,local_2c0);
    local_1e0 = 0x201;
    local_220 = 0x200;
    local_260 = 0x102;
  }
  else {
    local_2a0 = 0;
    local_260 = 0x100;
    local_220 = 0x200;
    local_1e0 = 1;
    FUN_017694a0(param_1,param_1 + 0x200,param_1 + 0x400,param_1 + 0x600,local_2c0);
    local_1e0 = 0x102;
    local_220 = 2;
    local_260 = 0x201;
  }
  iVar10 = 0;
  local_2a0 = 0x101;
  FUN_017694a0(param_1 + 0x800,param_1 + 0xa00,param_1 + 0xc00,param_1 + 0xe00,local_2c0);
  local_2a0 = 0x202;
  FUN_01757774(auStack_1b0,0xa8);
  param_1 = param_1 + 0x1000;
  FUN_01757884(auStack_1b0,local_2c0,0x22);
  FUN_01757d10(local_4c0,auStack_1b0,0x1f8);
  puVar4 = local_4c0;
  do {
    uVar5 = (ushort)(*(byte *)((int)puVar4 + 1) >> 4) | (ushort)(byte)puVar4[1] << 4;
    if ((*puVar4 & 0xfff) < 0xd01) {
      bVar11 = iVar10 != 0xff;
      iVar1 = iVar10 * 2;
      iVar10 = iVar10 + 1;
      *(ushort *)(param_1 + iVar1) = *puVar4 & 0xfff;
      if (uVar5 < 0xd01 && bVar11) goto LAB_01769c18;
LAB_01769c24:
      if (iVar10 == 0x100) {
LAB_01769d00:
        FUN_0177aaa0(local_4c0,0x1f8);
        FUN_0177aaa0(local_2c0,0x100);
        if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
          FUN_016d2b78();
        }
        return 0;
      }
    }
    else if (uVar5 < 0xd01) {
LAB_01769c18:
      iVar1 = iVar10 * 2;
      iVar10 = iVar10 + 1;
      *(ushort *)(param_1 + iVar1) = uVar5;
      goto LAB_01769c24;
    }
    puVar4 = (ushort *)((int)puVar4 + 3);
    if (auStack_2c8 == puVar4) {
      do {
        FUN_01757d10(local_4c0,auStack_1b0,0xa8);
        puVar4 = local_4c0;
        do {
          uVar5 = (ushort)(*(byte *)((int)puVar4 + 1) >> 4) | (ushort)(byte)puVar4[1] << 4;
          if ((*puVar4 & 0xfff) < 0xd01) {
            bVar11 = iVar10 != 0xff;
            iVar1 = iVar10 * 2;
            iVar10 = iVar10 + 1;
            *(ushort *)(param_1 + iVar1) = *puVar4 & 0xfff;
            if (uVar5 < 0xd01 && bVar11) goto LAB_01769cb0;
LAB_01769cbc:
            if (iVar10 == 0x100) goto LAB_01769d00;
          }
          else if (uVar5 < 0xd01) {
LAB_01769cb0:
            iVar1 = iVar10 * 2;
            iVar10 = iVar10 + 1;
            *(ushort *)(param_1 + iVar1) = uVar5;
            goto LAB_01769cbc;
          }
          puVar4 = (ushort *)((int)puVar4 + 3);
        } while (puVar4 != auStack_418);
      } while( true );
    }
  } while( true );
}

