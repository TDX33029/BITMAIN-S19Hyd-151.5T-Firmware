// FUN_0002e8bc @ 0002e8bc  size=200  callers=1
// program: bmminer


void FUN_0002e8bc(void)

{
  int iVar1;
  int iVar2;
  char local_810 [2052];
  
  iVar2 = DAT_007208a8;
  iVar1 = DAT_0071c79c;
  if (DAT_0071c79c == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("cgpu","bmminer.c",0x80d,"bitmain_primary_init");
  }
  *(undefined4 *)(DAT_0071c79c + 0x20) = 0;
  *(undefined **)(iVar1 + 4) = &DAT_0008a728;
  *(int *)(iVar1 + 0x14) = iVar2;
  *(undefined4 *)(iVar1 + 0x94) = 1;
  if (iVar2 == 0) {
    builtin_strncpy(local_810,"Failed to calloc cgpu_info data",0x20);
    FUN_00032218(3,local_810,1);
    iVar2 = *(int *)(iVar1 + 0x14);
  }
  *(undefined4 *)(iVar2 + 0x1684) = 0;
  *(undefined4 *)(iVar2 + 0x1688) = 1;
  *(undefined4 *)(iVar2 + 0x168c) = 2;
  return;
}

