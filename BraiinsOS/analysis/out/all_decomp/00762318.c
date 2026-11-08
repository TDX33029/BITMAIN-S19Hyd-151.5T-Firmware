// FUN_00762318 @ 00762318 size=1336 calls_out=18 calls_in=1
// strings: BUG: Cannot convert V1 method into a message | V1 id already exists

void FUN_00762318(undefined4 *param_1,int param_2,int *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 *****pppppuVar3;
  undefined4 ****ppppuVar4;
  undefined4 ******ppppppuVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 ****ppppuVar8;
  undefined4 ****ppppuVar9;
  int iVar10;
  undefined4 ****ppppuVar11;
  int local_c4;
  undefined4 ******local_c0;
  undefined4 *****local_bc;
  undefined *local_b8;
  undefined4 local_b4;
  undefined4 ******local_9c;
  undefined4 local_98;
  undefined4 *local_94;
  undefined4 ****local_90;
  int **local_8c;
  int *local_88;
  undefined1 *local_84;
  undefined4 ******local_80;
  undefined4 ******local_7c;
  undefined *local_78;
  undefined4 ******local_74;
  undefined4 *****local_70;
  code *local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 ****local_58;
  undefined4 ******local_54;
  undefined4 ****ppppuStack_50;
  undefined4 ****ppppuStack_4c;
  undefined4 ****ppppuStack_48;
  undefined4 ****ppppuStack_44;
  undefined4 ****local_40;
  undefined4 ******local_3c;
  undefined4 ****ppppuStack_38;
  undefined4 ****ppppuStack_34;
  undefined4 ****ppppuStack_30;
  undefined4 ****ppppuStack_2c;
  
  pppppuVar3 = (undefined4 *****)thunk_FUN_016d4a50(0x90);
  if (pppppuVar3 == (undefined4 *****)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(8,0x90);
  }
  ppppuVar11 = (undefined4 ****)param_3[2];
  uVar7 = 0;
  iVar10 = param_3[1];
  local_b8 = (undefined *)0x0;
  local_c0 = (undefined4 ******)&DAT_00000006;
  local_bc = pppppuVar3;
  if ((int)ppppuVar11 < 0) goto LAB_007623d0;
  ppppuVar8 = (undefined4 ****)0x1;
  ppppuVar4 = (undefined4 ****)0x0;
  if ((ppppuVar11 != (undefined4 ****)0x0) &&
     (ppppuVar8 = (undefined4 ****)thunk_FUN_016d4a50(ppppuVar11), ppppuVar4 = ppppuVar11,
     ppppuVar8 == (undefined4 ****)0x0)) {
    uVar7 = 1;
    goto LAB_007623d0;
  }
  FUN_016dd1aa(ppppuVar8,iVar10,ppppuVar11);
  ppppuVar9 = (undefined4 ****)param_3[5];
  iVar10 = param_3[4];
  *(undefined1 *)pppppuVar3 = 3;
  pppppuVar3[1] = ppppuVar4;
  pppppuVar3[2] = ppppuVar8;
  pppppuVar3[3] = ppppuVar11;
  local_b8 = (undefined *)0x1;
  if ((int)ppppuVar9 < 0) {
LAB_007623cc:
    ppppuVar11 = ppppuVar9;
LAB_007623d0:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar7,ppppuVar11);
  }
  if (ppppuVar9 == (undefined4 ****)0x0) {
    ppppuVar4 = (undefined4 ****)0x1;
    ppppuVar11 = (undefined4 ****)0x0;
  }
  else {
    ppppuVar4 = (undefined4 ****)thunk_FUN_016d4a50(ppppuVar9);
    ppppuVar11 = ppppuVar9;
    if (ppppuVar4 == (undefined4 ****)0x0) {
      uVar7 = 1;
      goto LAB_007623cc;
    }
  }
  FUN_016dd1aa(ppppuVar4,iVar10,ppppuVar9);
  iVar10 = param_3[7];
  iVar6 = param_3[8];
  *(undefined1 *)(pppppuVar3 + 6) = 3;
  pppppuVar3[7] = ppppuVar11;
  pppppuVar3[8] = ppppuVar4;
  pppppuVar3[9] = ppppuVar9;
  local_b8 = (undefined *)0x2;
  FUN_0111daa4(&local_58,iVar10,iVar6);
  if ((char)local_58 == '\x06') {
    ppppppuVar5 = local_54;
  }
  else {
    pppppuVar3[0xc] = local_58;
    pppppuVar3[0xd] = local_54;
    pppppuVar3[0xe] = ppppuStack_50;
    pppppuVar3[0xf] = ppppuStack_4c;
    pppppuVar3[0x10] = ppppuStack_48;
    pppppuVar3[0x11] = ppppuStack_44;
    local_b8 = (undefined *)0x3;
    FUN_0111dc0c(&local_40,param_3[9]);
    if ((char)local_40 == '\x06') {
      ppppppuVar5 = local_3c;
    }
    else {
      pppppuVar3[0x12] = local_40;
      pppppuVar3[0x13] = local_3c;
      pppppuVar3[0x14] = ppppuStack_38;
      pppppuVar3[0x15] = ppppuStack_34;
      pppppuVar3[0x16] = ppppuStack_30;
      pppppuVar3[0x17] = ppppuStack_2c;
      local_b8 = (undefined *)0x4;
      ppppppuVar5 = (undefined4 ******)FUN_01124d50(&local_c0,param_3[10]);
      if ((ppppppuVar5 == (undefined4 ******)0x0) &&
         (ppppppuVar5 = (undefined4 ******)FUN_01124d50(&local_c0,param_3[0xb]),
         ppppppuVar5 == (undefined4 ******)0x0)) {
        bVar1 = false;
        iVar10 = *param_3;
        local_80 = (undefined4 ******)local_bc;
        local_7c = (undefined4 ******)local_b8;
        ppppppuVar5 = local_c0;
        goto joined_r0x007626c0;
      }
    }
  }
  pppppuVar3 = local_bc;
  FUN_01127284(local_bc,local_b8);
  bVar1 = true;
  if (local_c0 != (undefined4 ******)0x0) {
    thunk_FUN_016d3fb4(pppppuVar3);
  }
  iVar10 = *param_3;
joined_r0x007626c0:
  if (iVar10 != 0) {
    thunk_FUN_016d3fb4(param_3[1]);
  }
  if (param_3[3] != 0) {
    thunk_FUN_016d3fb4(param_3[4]);
  }
  if (param_3[6] != 0) {
    thunk_FUN_016d3fb4(param_3[7]);
  }
  if (bVar1) {
    local_74 = local_c0;
    local_70 = local_bc;
    local_6c = (code *)local_b8;
    local_80 = (undefined4 ******)0x80000003;
    local_68 = local_b4;
    local_64 = 6;
    local_7c = ppppppuVar5;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: Cannot convert V1 method into a message",0x2c,&local_80,&DAT_0185bad4,
                 &DAT_01887ee8);
  }
  iVar10 = *(int *)(param_2 + 0x1bc);
  local_b4 = local_74;
  *(int *)(param_2 + 0x1bc) = iVar10 + 1;
  local_c4 = iVar10;
  FUN_0165a798(&local_c0);
  local_7c = (undefined4 ******)local_bc;
  local_80 = local_c0;
  local_68 = CONCAT31(local_68._1_3_,6);
  local_78 = local_b8;
  local_6c = FUN_0112afb8;
  local_70 = (undefined4 *****)FUN_0112b2a0;
  FUN_00752814(&local_c0,param_2 + 0x118,iVar10,&local_80);
  if (local_b8 == &DAT_3b9aca00) {
    FUN_007a22a8(&local_80,param_2 + 0x1a4);
    if ((char)local_70 == '\x02') {
      param_1[1] = iVar10;
      *param_1 = 0x11;
      return;
    }
    FUN_007857ac(param_1 + 1);
    *param_1 = 0xc;
    return;
  }
  if ((DAT_018d9130 < 5) &&
     (((DAT_018da76c - 1 < 2 ||
       ((DAT_018da76c != 0 && (cVar2 = FUN_0169ac90(&DAT_018da764), cVar2 != '\0')))) &&
      (iVar10 = FUN_016949d8(DAT_018da764), iVar10 != 0)))) {
    if (*(int *)(DAT_018da764 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01887ef8);
    }
    local_94 = (undefined4 *)(DAT_018da764 + 0x1c);
    local_80 = (undefined4 ******)*local_94;
    local_bc = &local_90;
    local_8c = &local_88;
    local_88 = &local_c4;
    local_7c = *(undefined4 *******)(DAT_018da764 + 0x20);
    local_78 = *(undefined **)(DAT_018da764 + 0x24);
    local_74 = *(undefined4 *******)(DAT_018da764 + 0x28);
    local_70 = (undefined4 *****)0x0;
    local_b8 = &DAT_018abb78;
    local_90 = (undefined4 ****)&DAT_00586828;
    local_84 = &LAB_00fac484;
    local_98 = 1;
    local_c0 = &local_80;
    local_9c = &local_c0;
    FUN_00763138(&local_9c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa478("V1 id already exists",0x29,&DAT_01887f08);
}

