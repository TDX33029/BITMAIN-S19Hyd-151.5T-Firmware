// FUN_017ce0e0 @ 017ce0e0 size=976 calls_out=14 calls_in=3
// strings: Missing scheme | invalid dnsname

undefined8 FUN_017ce0e0(int *param_1,char *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined *puVar7;
  int *piVar8;
  int unaff_r9;
  undefined8 uVar9;
  char *local_1c0;
  undefined2 local_1bc;
  undefined1 local_1ba;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  char local_188;
  undefined2 local_187;
  undefined1 local_185;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined *local_170;
  int *local_16c;
  undefined1 local_168;
  char **local_30;
  undefined *local_2c;
  undefined4 uStack_28;
  
  if (*param_2 == '\0') {
    FUN_019a18a8(&local_1b8,0x28,"Missing scheme",0xe);
    puVar5 = (undefined4 *)thunk_FUN_01be5118(0xc);
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xc);
    }
    puVar7 = &UNK_01d1c84c;
  }
  else {
    local_1c0 = param_2;
    iVar3 = FUN_0141103c(param_2,&DAT_00570850);
    if ((iVar3 != 0) && ((*(byte *)(param_1 + 7) & 1) == 0)) {
      local_1b8 = *(char ***)param_2;
      local_1b4 = *(undefined4 *)(param_2 + 4);
      local_1b0 = *(undefined4 *)(param_2 + 8);
      local_1ac = *(undefined4 *)(param_2 + 0xc);
      local_1a8 = *(undefined4 *)(param_2 + 0x10);
      local_1a4 = *(undefined4 *)(param_2 + 0x14);
      uStack_1a0 = *(undefined4 *)(param_2 + 0x18);
      uStack_19c = *(undefined4 *)(param_2 + 0x1c);
      uStack_198 = *(undefined4 *)(param_2 + 0x20);
      uStack_194 = *(undefined4 *)(param_2 + 0x24);
      uStack_190 = *(undefined4 *)(param_2 + 0x28);
      uVar4 = FUN_01801738(param_1 + 3);
      puVar5 = (undefined4 *)thunk_FUN_01be5118(0x14);
      if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x14);
      }
      *puVar5 = uVar4;
      puVar7 = &UNK_01d1c80c;
      *(undefined1 *)(puVar5 + 4) = 0;
      puVar5[1] = &DAT_01d1d4d4;
      goto LAB_017ce2a8;
    }
    iVar3 = FUN_0141103c(param_2,&DAT_00570360);
    if (iVar3 != 0) {
      piVar8 = (int *)param_1[6];
      do {
        iVar3 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = iVar3 + 1;
      if (iVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x17ce4bc);
        (*pcVar1)();
      }
      if (*param_1 == -0x80000000) {
        if (*(int *)(param_2 + 0x10) == 0) {
          iVar3 = 0;
        }
        else {
          uVar9 = FUN_0140d000(*(undefined4 *)(param_2 + 0xc));
          unaff_r9 = (int)((ulonglong)uVar9 >> 0x20);
          iVar3 = (int)uVar9;
        }
        if (iVar3 == 0) {
          iVar3 = 1;
          unaff_r9 = 0;
        }
      }
      else {
        iVar3 = param_1[1];
        unaff_r9 = param_1[2];
      }
      iVar6 = FUN_01ad01c4(iVar3,unaff_r9,0x5b);
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_017cc7e8();
      }
      if (iVar6 == 0) {
        iVar6 = iVar3;
      }
      FUN_018d2b4c(&local_1b8,iVar6);
      local_178 = local_1a8;
      local_17c = local_1ac;
      local_180 = local_1b0;
      local_184 = local_1b4;
      local_188 = (char)local_1b8;
      if ((char)local_1b8 == '\x02') {
        FUN_019a18a8(&local_30,0x28,"invalid dnsname",0xf);
        puVar5 = (undefined4 *)thunk_FUN_01be5118(0xc);
        if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0xc);
        }
        *(undefined1 *)(puVar5 + 2) = 0;
        *puVar5 = local_30;
        puVar5[1] = local_2c;
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar8;
          bVar2 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar2);
        *piVar8 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018bcb30(piVar8);
        }
        FUN_01706d0c(param_2);
        puVar7 = &UNK_01d1c83c;
      }
      else {
        local_1bc = local_1b8._1_2_;
        local_1ba = local_1b8._3_1_;
        local_1b8 = *(char ***)param_2;
        local_1b4 = *(undefined4 *)(param_2 + 4);
        local_1b0 = *(undefined4 *)(param_2 + 8);
        local_1ac = *(undefined4 *)(param_2 + 0xc);
        local_1a8 = *(undefined4 *)(param_2 + 0x10);
        local_1a4 = *(undefined4 *)(param_2 + 0x14);
        uStack_1a0 = *(undefined4 *)(param_2 + 0x18);
        uStack_19c = *(undefined4 *)(param_2 + 0x1c);
        uStack_198 = *(undefined4 *)(param_2 + 0x20);
        uStack_194 = *(undefined4 *)(param_2 + 0x24);
        uStack_190 = *(undefined4 *)(param_2 + 0x28);
        local_174 = FUN_01801738(param_1 + 3,&local_1b8);
        local_168 = 0;
        local_187 = local_1bc;
        local_185 = local_1ba;
        local_170 = &DAT_01d1d4d4;
        local_16c = piVar8;
        puVar5 = (undefined4 *)thunk_FUN_01be5118(0x158);
        if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0x158);
        }
        FUN_01bed4e2(puVar5,&local_188,0x158);
        puVar7 = &UNK_01d1c82c;
      }
      goto LAB_017ce2a8;
    }
    local_2c = &DAT_01410c5c;
    local_30 = &local_1c0;
    FUN_00664898(&local_1b8,&DAT_0059d0c4,&local_30);
    local_30 = local_1b8;
    local_2c = (undefined *)local_1b4;
    uStack_28 = local_1b0;
    FUN_0193843c(&local_1b8,0x28,&local_30);
    puVar5 = (undefined4 *)thunk_FUN_01be5118(0xc);
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xc);
    }
    puVar7 = &UNK_01d1c81c;
  }
  *puVar5 = local_1b8;
  puVar5[1] = local_1b4;
  *(undefined1 *)(puVar5 + 2) = 0;
  FUN_01706d0c(param_2);
LAB_017ce2a8:
  return CONCAT44(puVar7,puVar5);
}

