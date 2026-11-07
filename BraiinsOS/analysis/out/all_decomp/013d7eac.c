// FUN_013d7eac @ 013d7eac size=780 calls_out=13 calls_in=1
// strings: 

void FUN_013d7eac(undefined4 *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_2dc;
  undefined1 *local_2d8;
  int local_2d4;
  int local_2d0;
  int local_2cc;
  int local_2c8;
  int iStack_2c4;
  int iStack_2c0;
  int iStack_2bc;
  int iStack_2b8;
  int iStack_2b4;
  undefined1 auStack_280 [88];
  int local_228 [38];
  int local_190;
  int local_18c;
  int local_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined1 auStack_168 [100];
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f0;
  int local_ec;
  undefined1 auStack_98 [116];
  
  local_2dc = FUN_013d2518(param_2);
  if (local_2dc != 0x5d) {
    FUN_013ff7ac(&local_2dc,&DAT_00568adc,&DAT_01894ef8);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x13d8190);
    (*pcVar1)();
  }
  iVar4 = param_3[2];
  iVar12 = *param_3;
  iVar11 = param_3[1];
  if (iVar4 == 0) {
    iVar4 = param_3[4];
    iVar8 = param_3[5];
    iVar7 = param_3[6];
    iVar9 = param_3[7];
    iVar10 = param_3[8];
    piVar5 = (int *)((uint)&local_2d8 | 4);
    *piVar5 = param_3[3];
    piVar5[1] = iVar4;
    piVar5[2] = iVar8;
    piVar5[3] = iVar7;
    piVar5[4] = iVar9;
    piVar5[5] = iVar10;
    local_2d8 = &DAT_00110000;
    if (iVar12 != 0) goto LAB_013d7f38;
  }
  else if (iVar4 == 1) {
    FUN_016dd1aa(&local_2d8,iVar11,0x58);
LAB_013d7f38:
    thunk_FUN_016d3fb4(iVar11);
  }
  else {
    local_2c8 = param_3[3];
    iStack_2c4 = param_3[4];
    iStack_2c0 = param_3[5];
    iStack_2bc = param_3[6];
    iStack_2b8 = param_3[7];
    iStack_2b4 = param_3[8];
    local_2d8 = (undefined1 *)0x110007;
    local_2d4 = iVar12;
    local_2d0 = iVar11;
    local_2cc = iVar4;
  }
  iVar4 = *param_2;
  FUN_013d8d6c(auStack_280,iVar4,&local_2d8);
  if (*(int *)(iVar4 + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_01894ee8);
  }
  *(undefined4 *)(iVar4 + 0x20) = 0xffffffff;
  if (*(int *)(iVar4 + 0x2c) == 0) {
    local_228[0] = 0x11000a;
  }
  else {
    iVar11 = *(int *)(iVar4 + 0x2c) + -1;
    iVar12 = iVar11 * 0x98 + *(int *)(iVar4 + 0x28);
    *(int *)(iVar4 + 0x2c) = iVar11;
    FUN_016dd1aa(local_228,iVar12,0x98);
    if (local_228[0] == 0x110009) {
      uVar3 = 0x33;
      puVar6 = &DAT_01894ed8;
      puVar2 = &DAT_003cefc4;
      goto LAB_013d817c;
    }
    if (local_228[0] != 0x11000a) {
      local_190 = *(int *)(iVar12 + 0x74);
      local_18c = *(int *)(iVar12 + 0x78);
      local_188 = *(int *)(iVar12 + 0x7c);
      uStack_184 = *(undefined4 *)(iVar12 + 0x80);
      local_180 = *(undefined4 *)(iVar12 + 0x84);
      uStack_17c = *(undefined4 *)(iVar12 + 0x88);
      uStack_178 = *(undefined4 *)(iVar12 + 0x8c);
      uStack_174 = *(undefined4 *)(iVar12 + 0x90);
      uStack_170 = *(undefined4 *)(iVar12 + 0x94);
      FUN_016dd1aa(auStack_168,iVar12,0x74);
      FUN_013d2d20(param_2);
      local_104 = *(undefined4 *)(iVar4 + 0x50);
      uStack_100 = *(undefined4 *)(iVar4 + 0x54);
      uStack_fc = *(undefined4 *)(iVar4 + 0x58);
      FUN_013d1ed8(auStack_168);
      FUN_016dd1aa(auStack_168,auStack_280,0x58);
      if (*(int *)(iVar4 + 0x2c) == 0) {
        FUN_016dd1aa(param_1,auStack_168,0x74);
        iVar11 = local_18c;
        iVar8 = local_188 + 1;
        iVar12 = local_18c;
        while (iVar8 = iVar8 + -1, iVar8 != 0) {
          FUN_013e7308(iVar12);
          iVar12 = iVar12 + 0x58;
        }
        if (local_190 != 0) {
          thunk_FUN_016d3fb4(iVar11);
        }
        *(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + 1;
        if (local_228[0] == 0x110009) {
          FUN_013d1ed8((uint)local_228 | 4);
          return;
        }
      }
      else {
        FUN_016dd1aa(auStack_98,auStack_168,0x74);
        iVar11 = thunk_FUN_016d4a50(0x74);
        if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x74);
        }
        FUN_016dd1aa(iVar11,auStack_168,0x74);
        local_f0 = 0x110006;
        local_ec = iVar11;
        FUN_013f53b4(&local_190,&local_f0);
        param_1[1] = local_190;
        param_1[2] = local_18c;
        param_1[3] = local_188;
        param_1[4] = uStack_184;
        param_1[5] = local_180;
        param_1[6] = uStack_17c;
        param_1[7] = uStack_178;
        param_1[8] = uStack_174;
        param_1[9] = uStack_170;
        iVar11 = *(int *)(iVar4 + 0x20);
        *param_1 = 0x110009;
        *(int *)(iVar4 + 0x20) = iVar11 + 1;
      }
      return;
    }
  }
  puVar6 = &DAT_01894ec8;
  puVar2 = &DAT_003cef9e;
  uVar3 = 0x4d;
LAB_013d817c:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(puVar2,uVar3,puVar6);
}

