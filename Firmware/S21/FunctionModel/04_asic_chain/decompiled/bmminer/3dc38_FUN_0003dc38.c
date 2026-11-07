// FUN_0003dc38 @ 0003dc38  size=376  callers=0
// program: bmminer


void FUN_0003dc38(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int local_2030;
  undefined4 local_202c;
  undefined4 local_2028;
  undefined4 local_2024;
  char local_2020 [8192];
  
  uVar2 = FUN_0006c30c();
  uVar6 = 0;
  FUN_0006c338(uVar2 | 0x10000);
  prctl(0xf,"nonce_reg_process",0,0,0);
LAB_0003dc84:
  uVar2 = FUN_0006b9c4();
  if (uVar2 == 1) goto LAB_0003dd50;
  do {
    uVar2 = uVar2 >> 1;
    if (uVar2 != 0) {
      uVar6 = 0;
      do {
        while( true ) {
          FUN_0006ba4c(&local_2030);
          iVar3 = 1;
          iVar5 = 3;
          iVar4 = 2;
          uVar7 = DAT_000c74c8 + 4;
          if (uVar7 < 0x2a9) {
            iVar3 = DAT_000c74c8 + 1;
            iVar4 = DAT_000c74c8 + 2;
            iVar5 = DAT_000c74c8 + 3;
          }
          else {
            uVar7 = 4;
            DAT_000c74c8 = 0;
          }
          piVar1 = &DAT_000c74cc + DAT_000c74c8;
          DAT_000c74c8 = uVar7;
          *piVar1 = local_2030;
          (&DAT_000c74cc)[iVar3] = local_202c;
          (&DAT_000c74cc)[iVar4] = local_2028;
          (&DAT_000c74cc)[iVar5] = local_2024;
          if (-1 < local_2030) break;
          uVar6 = uVar6 + 1;
          FUN_00046a48();
          if (uVar2 == uVar6) goto LAB_0003dd38;
        }
        uVar6 = uVar6 + 1;
        FUN_00046e6c(&local_2030);
      } while (uVar2 != uVar6);
    }
LAB_0003dd38:
    uVar6 = 0;
    while( true ) {
      FUN_0004bf68(1);
      uVar2 = FUN_0006b9c4();
      if (uVar2 != 1) break;
LAB_0003dd50:
      uVar6 = uVar6 + 1;
      if (1 < uVar6) {
        uVar2 = FUN_0006c30c();
        FUN_0006c338(uVar2 | 0x10000);
        if (3 < DAT_000be63c) {
          builtin_strncpy(local_2020,"nonce fifo flush because of misalign_count.\n",0x2d);
          FUN_0004948c(3,local_2020,0);
        }
        goto LAB_0003dc84;
      }
    }
  } while( true );
}

