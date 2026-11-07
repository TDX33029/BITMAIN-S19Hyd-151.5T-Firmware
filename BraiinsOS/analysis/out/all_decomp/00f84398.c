// FUN_00f84398 @ 00f84398 size=576 calls_out=4 calls_in=0
// strings: 

void FUN_00f84398(int *param_1,int *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  int local_34;
  undefined1 *local_30;
  int local_2c;
  uint local_28;
  
  puVar8 = (undefined1 *)param_2[0xd];
  if (puVar8 == &DAT_00110000) {
    iVar9 = param_2[0x48];
    if (iVar9 == 0) {
      local_30 = (undefined1 *)thunk_FUN_016d4a50(1);
      if (local_30 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,1);
      }
      iVar9 = param_2[0x46];
      iVar6 = param_2[0x45];
      *local_30 = 0x7b;
      local_2c = 1;
      local_34 = 1;
      if (iVar9 != 0) {
        FUN_00f991dc(&local_34,1,iVar9,1,1);
      }
      iVar10 = local_2c;
      puVar8 = local_30;
      iVar3 = local_34;
      FUN_016dd1aa(local_30 + local_2c,iVar6,iVar9);
      iVar10 = iVar10 + iVar9;
      local_30 = puVar8;
      local_34 = iVar3;
    }
    else {
      iVar10 = param_2[0x49];
      if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(0,iVar10);
      }
      if (iVar10 == 0) {
        iVar6 = 0;
        puVar8 = &DAT_00000001;
      }
      else {
        puVar8 = (undefined1 *)thunk_FUN_016d4a50(iVar10);
        iVar6 = iVar10;
        if (puVar8 == (undefined1 *)0x0) goto LAB_00f845c0;
      }
      FUN_016dd1aa(puVar8,iVar9,iVar10);
      local_30 = puVar8;
      local_34 = iVar6;
    }
  }
  else {
    puVar5 = puVar8;
    if (puVar8 + -0x41 < (undefined1 *)0x1a) {
      puVar5 = (undefined1 *)((uint)puVar8 | 0x20);
    }
    if (puVar5 < (undefined1 *)0x80) {
      local_28 = (uint)puVar5 & 0xff;
      iVar10 = 1;
    }
    else {
      uVar1 = SUB41(puVar5,0);
      uVar7 = (undefined1)((uint)puVar5 >> 6);
      if (puVar5 < (undefined1 *)0x800) {
        local_28 = (CONCAT11(uVar1,uVar7) & 0x3fff | 0x8000) | 0xc0;
        iVar10 = 2;
      }
      else {
        bVar4 = (byte)((uint)puVar5 >> 0xc);
        if ((uint)puVar5 >> 0x10 == 0) {
          bVar4 = bVar4 | 0xe0;
          local_28 = (uint)((CONCAT11(uVar1,uVar7) & 0x3fff | 0x8000) & 0xffff3f | 0x80) << 8;
          iVar10 = 3;
        }
        else {
          local_28._0_3_ = (uint3)(bVar4 & 0x3f | 0x80) << 8;
          iVar10 = 4;
          bVar4 = (byte)((uint)puVar5 >> 0x12) | 0xf0;
          uVar2 = CONCAT13(uVar1,(int3)local_28) & 0x3fffffff;
          local_28._0_2_ = (undefined2)uVar2;
          local_28 = CONCAT13((char)(uVar2 >> 0x18),CONCAT12(uVar7,(undefined2)local_28)) &
                     0xff3fffff | 0x80800000;
        }
        local_28 = CONCAT31(local_28._1_3_,bVar4);
      }
    }
    local_30 = (undefined1 *)thunk_FUN_016d4a50(iVar10);
    if (local_30 == (undefined1 *)0x0) {
LAB_00f845c0:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar10);
    }
    FUN_016dd1aa(local_30,&local_28,iVar10);
    local_34 = iVar10;
    local_2c = iVar10;
    FUN_00f991dc(&local_34,iVar10,1,1,1);
    iVar10 = iVar10 + 1;
    uVar7 = 0x31;
    if (puVar8 + -0x61 < (undefined1 *)0x1a) {
      uVar7 = 0x30;
    }
    local_30[local_2c] = uVar7;
  }
  iVar9 = *param_2;
  iVar6 = param_2[1];
  param_1[2] = (int)local_30;
  param_1[3] = iVar10;
  if (iVar9 == 0) {
    iVar6 = 999;
  }
  *param_1 = iVar6;
  param_1[1] = local_34;
  return;
}

