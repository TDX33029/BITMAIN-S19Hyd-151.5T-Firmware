// FUN_012ade88 @ 012ade88 size=580 calls_out=5 calls_in=0
// strings: 

void FUN_012ade88(int *param_1,int *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int local_30;
  undefined1 *local_2c;
  int local_28;
  uint local_24;
  
  puVar7 = (undefined1 *)param_2[0xd];
  if (puVar7 == &DAT_00110000) {
    iVar8 = param_2[0x48];
    if (iVar8 == 0) {
      local_2c = (undefined1 *)thunk_FUN_01be5118(1);
      if (local_2c == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,1);
      }
      iVar8 = param_2[0x46];
      iVar11 = param_2[0x45];
      *local_2c = 0x7b;
      local_28 = 1;
      local_30 = 1;
      if (iVar8 != 0) {
        FUN_006520b4(&local_30,1,iVar8,1,1);
      }
      iVar9 = local_28;
      puVar7 = local_2c;
      iVar3 = local_30;
      FUN_01bed4e2(local_2c + local_28,iVar11,iVar8);
      iVar9 = iVar9 + iVar8;
      local_30 = iVar3;
      local_2c = puVar7;
    }
    else {
      iVar9 = param_2[0x49];
      uVar10 = 0;
      if (iVar9 < 0) {
LAB_012adec4:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar10,iVar9);
      }
      if (iVar9 == 0) {
        puVar7 = &DAT_00000001;
        iVar11 = 0;
      }
      else {
        uVar10 = 1;
        puVar7 = (undefined1 *)FUN_01298504(iVar9,1);
        iVar11 = iVar9;
        if (puVar7 == (undefined1 *)0x0) goto LAB_012adec4;
      }
      FUN_01bed4e2(puVar7,iVar8,iVar9);
      local_30 = iVar11;
      local_2c = puVar7;
    }
  }
  else {
    puVar5 = puVar7;
    if (puVar7 + -0x41 < (undefined1 *)0x1a) {
      puVar5 = (undefined1 *)((uint)puVar7 | 0x20);
    }
    if (puVar5 < (undefined1 *)0x80) {
      local_24 = (uint)puVar5 & 0xff;
      iVar9 = 1;
    }
    else {
      uVar1 = SUB41(puVar5,0);
      uVar6 = (undefined1)((uint)puVar5 >> 6);
      if (puVar5 < (undefined1 *)0x800) {
        local_24 = (CONCAT11(uVar1,uVar6) & 0x3fff | 0x8000) | 0xc0;
        iVar9 = 2;
      }
      else {
        bVar4 = (byte)((uint)puVar5 >> 0xc);
        if ((uint)puVar5 >> 0x10 == 0) {
          bVar4 = bVar4 | 0xe0;
          local_24 = (uint)((CONCAT11(uVar1,uVar6) & 0x3fff | 0x8000) & 0xffff3f | 0x80) << 8;
          iVar9 = 3;
        }
        else {
          local_24._0_3_ = (uint3)(bVar4 & 0x3f | 0x80) << 8;
          iVar9 = 4;
          bVar4 = (byte)((uint)puVar5 >> 0x12) | 0xf0;
          uVar2 = CONCAT13(uVar1,(int3)local_24) & 0x3fffffff;
          local_24._0_2_ = (undefined2)uVar2;
          local_24 = CONCAT13((char)(uVar2 >> 0x18),CONCAT12(uVar6,(undefined2)local_24)) &
                     0xff3fffff | 0x80800000;
        }
        local_24 = CONCAT31(local_24._1_3_,bVar4);
      }
    }
    local_2c = (undefined1 *)FUN_01298504(iVar9,1);
    if (local_2c == (undefined1 *)0x0) {
      uVar10 = 1;
      goto LAB_012adec4;
    }
    FUN_01bed4e2(local_2c,&local_24,iVar9);
    local_30 = iVar9;
    local_28 = iVar9;
    FUN_006520b4(&local_30,iVar9,1,1,1);
    uVar6 = 0x31;
    if (puVar7 + -0x61 < (undefined1 *)0x1a) {
      uVar6 = 0x30;
    }
    iVar9 = iVar9 + 1;
    local_2c[local_28] = uVar6;
  }
  iVar8 = param_2[1];
  if (*param_2 == 0) {
    iVar8 = 999;
  }
  *param_1 = iVar8;
  param_1[1] = local_30;
  param_1[2] = (int)local_2c;
  param_1[3] = iVar9;
  return;
}

