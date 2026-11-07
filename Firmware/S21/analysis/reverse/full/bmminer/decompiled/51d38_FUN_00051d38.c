// FUN_00051d38 @ 00051d38  size=384  callers=2
// program: bmminer


void FUN_00051d38(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char local_2028 [16];
  undefined4 local_2018;
  
  uVar1 = FUN_00050d70(3);
  if (3 < DAT_000be63c) {
    builtin_strncpy(local_2028,"start do_core_re",0x10);
    local_2018._0_1_ = 's';
    local_2018._1_1_ = 'e';
    local_2018._2_1_ = 't';
    local_2018._3_1_ = '\0';
    FUN_0004948c(3,local_2028,0);
  }
  uVar6 = 0;
  do {
    iVar2 = FUN_0002a6f0(uVar6);
    if ((iVar2 != 0) && (iVar2 = FUN_0002a514(), 0 < iVar2)) {
      uVar5 = uVar6 & 0xff;
      iVar4 = 0;
      do {
        iVar3 = FUN_0002a584();
        FUN_000828c8(uVar5,iVar4 * iVar3);
        usleep(10000);
        iVar3 = FUN_0002a584();
        FUN_000822d4(uVar5,iVar4 * iVar3,(char)uVar1,0);
        FUN_0004bf68(10);
        iVar3 = FUN_0002a584();
        FUN_00082c00(uVar5,iVar4 * iVar3,(char)((uint)uVar1 >> 8),(char)((uint)uVar1 >> 0x10),0);
        FUN_0004bf68(10);
        iVar3 = FUN_0002a584();
        iVar3 = iVar4 * iVar3;
        iVar4 = iVar4 + 1;
        FUN_00082a04(uVar5,iVar3);
        usleep(10000);
      } while (iVar2 != iVar4);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 != 4);
  if (3 < DAT_000be63c) {
    builtin_strncpy(local_2028,"end do_core_rese",0x10);
    local_2018 = CONCAT22(local_2018._2_2_,0x74);
    FUN_0004948c(3,local_2028,0);
  }
  return;
}

