// FUN_00044680 @ 00044680  size=208  callers=1
// program: bmminer


void FUN_00044680(void)

{
  int iVar1;
  int iVar2;
  char local_2010 [8196];
  
  iVar1 = DAT_00a5f274;
  iVar2 = DAT_00a5f250;
  if (DAT_00a5f274 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("cgpu","bmminer.c",0x892,"bitmain_primary_init");
  }
  *(undefined4 *)(DAT_00a5f274 + 0x20) = 0;
  *(undefined **)(iVar1 + 4) = &DAT_000c93c0;
  *(int *)(iVar1 + 0x14) = iVar2;
  *(undefined4 *)(iVar1 + 0x94) = 1;
  if (iVar2 == 0) {
    builtin_strncpy(local_2010,"Failed to calloc cgpu_info data",0x20);
    FUN_0004948c(3,local_2010,1);
    iVar2 = *(int *)(iVar1 + 0x14);
  }
  *(undefined4 *)(iVar2 + 0x1dcc) = 0;
  *(undefined4 *)(iVar2 + 0x1dd0) = 1;
  *(undefined4 *)(iVar2 + 0x1dd4) = 2;
  *(undefined4 *)(iVar2 + 0x1dd8) = 3;
  return;
}

