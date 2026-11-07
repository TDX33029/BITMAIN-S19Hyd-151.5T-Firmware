// FUN_0157eb80 @ 0157eb80 size=808 calls_out=5 calls_in=2
// strings: fmt error

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Exceeded maximum restarts with more pending */

int FUN_0157eb80(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  int iVar17;
  int local_50;
  uint local_38;
  undefined4 *local_34;
  uint local_30;
  undefined4 *local_2c;
  
  iVar2 = *(int *)(param_2 + 4);
  puVar13 = (undefined4 *)*param_1;
  iVar11 = param_1[3];
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[3] = iVar11 + 1;
  iVar10 = *(int *)(param_2 + 8);
  FUN_0157a340(&local_30,*puVar13,&DAT_00418df9,1);
  if ((char)local_30 == '\x04') {
    if (iVar10 != 0) {
      bVar1 = true;
      local_50 = iVar2;
      do {
        puVar13 = (undefined4 *)*param_1;
        if (bVar1) {
          uVar8 = 1;
          puVar7 = &DAT_0041950e;
        }
        else {
          uVar8 = 2;
          puVar7 = &DAT_00414a81;
        }
        FUN_0157a340(&local_38,*puVar13,puVar7,uVar8);
        if ((char)local_38 != '\x04') {
LAB_0157eef8:
          iVar2 = FUN_0157c4a0(local_38,local_34);
          return iVar2;
        }
        iVar17 = 0;
        iVar11 = local_50 + 0x18;
        puVar14 = (undefined4 *)param_1[2];
        iVar6 = param_1[1];
        iVar3 = param_1[3];
        while (iVar17 != iVar3) {
          iVar17 = iVar17 + 1;
          if (puVar14 != (undefined4 *)0x0) {
            puVar16 = (undefined4 *)*puVar13;
            iVar9 = iVar6;
            puVar12 = puVar14;
            do {
              iVar5 = (**(code **)(puVar16[1] + 0xc))(*puVar16,iVar9,puVar12);
              puVar4 = puVar12;
              if (iVar5 != 0) {
                FUN_015e79d4(&local_30,0x28,"fmt error",9);
                switch(local_30 & 0xff) {
                case 0xe6f4ed58:
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* WARNING: This code block may not be properly labeled as switch case */
                  halt_baddata();
                }
                if (local_2c == (undefined4 *)0x0) {
                  local_38 = 2;
                  local_34 = &DAT_018aeae8;
                  goto LAB_0157eef8;
                }
                puVar4 = local_2c;
                if (puVar12 < local_2c) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa36c(local_2c,puVar12,puVar12,&DAT_018aeb00);
                }
              }
              iVar9 = iVar9 + (int)puVar4;
              puVar12 = (undefined4 *)((int)puVar12 - (int)puVar4);
            } while (puVar12 != (undefined4 *)0x0);
          }
          local_38 = CONCAT31(local_38._1_3_,4);
        }
        iVar3 = FUN_0157ef9c(local_50,param_1);
        if (iVar3 != 0) {
          return iVar3;
        }
        *(undefined1 *)(param_1 + 4) = 1;
        bVar1 = false;
        local_50 = iVar11;
      } while (iVar11 != iVar2 + iVar10 * 0x18);
      iVar2 = param_1[3];
      puVar13 = (undefined4 *)*param_1;
      param_1[3] = iVar2 + -1;
      FUN_0157a340(&local_38,*puVar13,&DAT_0041950e,1);
      if ((char)local_38 == '\x04') {
        uVar8 = param_1[1];
        uVar15 = param_1[2];
        do {
          iVar2 = iVar2 + -1;
          if (iVar2 == 0) {
            FUN_0157a340(&local_38,*puVar13,&DAT_00418ec5,1);
            goto LAB_0157ef28;
          }
          FUN_0157a340(&local_30,*puVar13,uVar8,uVar15);
        } while ((char)local_30 == '\x04');
        local_34 = local_2c;
        local_38 = local_30;
LAB_0157ef28:
        if ((local_38 & 0xff) == 4) {
          return 0;
        }
      }
      iVar2 = FUN_0157c4a0(local_38,local_34);
      return iVar2;
    }
    param_1[3] = iVar11;
    FUN_0157a340(&local_30,*puVar13,&DAT_00418ec5,1);
    if ((local_30 & 0xff) == 4) {
      return 0;
    }
  }
  iVar2 = FUN_0157c4a0(local_30,local_2c);
  return iVar2;
}

