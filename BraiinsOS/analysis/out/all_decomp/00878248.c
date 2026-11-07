// FUN_00878248 @ 00878248 size=848 calls_out=11 calls_in=0
// strings: 

longlong FUN_00878248(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint unaff_r6;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  uint local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x8e)) {
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01861b10);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01861b10);
  case 3:
    goto switchD_0087826c_caseD_3;
  }
  iVar1 = param_1[0x22];
  uVar3 = 0;
  *(undefined1 *)((int)param_1 + 0x8d) = 0;
  param_1[0x1a] = iVar1;
  *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)((int)param_1 + 0x8f);
  if (1 < *(uint *)(iVar1 + 0x94)) {
    if (*(int *)(iVar1 + 0x80) == -0x80000000) {
      uVar3 = FUN_00808f1c(&DAT_0034453c,0x2b);
    }
    else {
      iVar4 = *(int *)(iVar1 + 0x88);
      uVar6 = *(undefined4 *)(iVar1 + 0x84);
      if (iVar4 == 0) {
        iVar1 = 1;
      }
      else {
        iVar1 = thunk_FUN_016d4a50(iVar4);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar4);
        }
      }
      FUN_016dd1aa(iVar1,uVar6,iVar4);
      uVar6 = 0;
      param_1[0x1b] = iVar4;
      param_1[0x1c] = iVar1;
      param_1[0x1d] = iVar4;
      unaff_r6 = *(uint *)(param_1[0x1a] + 0x94);
      bVar9 = 0x3ffffffe < unaff_r6;
      bVar8 = unaff_r6 == 0x3fffffff;
      uVar3 = unaff_r6 * 4;
      if (unaff_r6 < 0x40000000) {
        bVar9 = 0x7ffffffb < uVar3;
        bVar8 = uVar3 == 0x7ffffffc;
      }
      if (bVar9 && !bVar8) {
LAB_0087832c:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar6,uVar3);
      }
      uVar6 = *(undefined4 *)(param_1[0x1a] + 0x90);
      if (uVar3 == 0) {
        puVar5 = (undefined4 *)&DAT_00000004;
        uVar7 = 0;
      }
      else {
        puVar5 = (undefined4 *)thunk_FUN_016d4a50(uVar3);
        uVar7 = unaff_r6;
        if (puVar5 == (undefined4 *)0x0) {
          uVar6 = 4;
          goto LAB_0087832c;
        }
      }
      FUN_016dd1aa(puVar5,uVar6,uVar3);
      puVar2 = puVar5 + unaff_r6;
      *param_1 = puVar5;
      param_1[1] = puVar5;
      param_1[2] = uVar7;
      param_1[3] = puVar2;
      while (puVar5 != puVar2) {
        local_34 = param_1 + 0x1e;
        *local_34 = *puVar5;
        param_1[1] = puVar5 + 1;
        local_60 = (uint)*(byte *)(param_1 + 0x23);
        local_3c = param_1 + 0x1b;
        local_28 = &LAB_00fac484;
        local_30 = &LAB_00fac484;
        local_38 = &DAT_006043a8;
        local_2c = (undefined1 *)&local_60;
        FUN_00600d2c(&local_50,&DAT_0056b629,&local_3c);
        param_1[0x1f] = local_50;
        param_1[0x20] = uStack_4c;
        param_1[0x21] = uStack_48;
        *(undefined1 *)((int)param_1 + 0x8d) = 1;
        *(undefined1 *)((int)param_1 + 0x8d) = 0;
        *(undefined1 *)(param_1 + 0x19) = 0;
        param_1[4] = param_1[0x1f];
        param_1[5] = param_1[0x20];
        param_1[6] = param_1[0x21];
        param_1[7] = param_1[0x1a];
switchD_0087826c_caseD_3:
        uVar10 = FUN_008765cc(param_1 + 4,param_2);
        iVar1 = (int)(uVar10 >> 0x20);
        if ((uVar10 & 1) != 0) {
          *(undefined1 *)((int)param_1 + 0x8e) = 3;
          return CONCAT44(unaff_r6,1);
        }
        if (*(char *)(param_1 + 0x19) == '\x03') {
          FUN_00875460(param_1 + 8);
          *(undefined1 *)((int)param_1 + 0x65) = 0;
        }
        else if ((*(char *)(param_1 + 0x19) == '\0') && (param_1[4] != 0)) {
          thunk_FUN_016d3fb4(param_1[5]);
        }
        if (iVar1 != 0) {
          local_38 = (undefined4 *)&LAB_00fac484;
          local_30 = &LAB_00faaef4;
          local_34 = param_1 + 0x23;
          local_3c = param_1 + 0x1e;
          FUN_00600d2c(&local_60,&DAT_005911f2,&local_3c);
          local_3c = (undefined4 *)0x3;
          local_50 = local_60;
          uStack_4c = uStack_5c;
          uStack_48 = uStack_58;
          iStack_44 = iVar1;
          uVar3 = FUN_0080818c(&local_50,&local_3c);
          *(undefined1 *)((int)param_1 + 0x8d) = 0;
          if (param_1[2] != 0) {
            thunk_FUN_016d3fb4(*param_1);
          }
          if (param_1[0x1b] != 0) goto LAB_00878538;
          goto LAB_00878540;
        }
        puVar5 = (undefined4 *)param_1[1];
        puVar2 = (undefined4 *)param_1[3];
        *(undefined1 *)((int)param_1 + 0x8d) = 0;
        unaff_r6 = 0;
      }
      if (param_1[2] != 0) {
        thunk_FUN_016d3fb4(*param_1);
      }
      uVar3 = 0;
      if (param_1[0x1b] != 0) {
LAB_00878538:
        thunk_FUN_016d3fb4(param_1[0x1c]);
      }
    }
  }
LAB_00878540:
  *(undefined1 *)((int)param_1 + 0x8e) = 1;
  return (ulonglong)uVar3 << 0x20;
}

