// FUN_00029324 @ 00029324  size=48  callers=5
// program: bmminer


undefined4 FUN_00029324(void)

{
  int iVar1;
  undefined4 uVar2;
  sysinfo local_48;
  
  iVar1 = sysinfo(&local_48);
  if (iVar1 == 0) {
    return local_48.uptime;
  }
  uVar2 = FUN_000292b4();
  return uVar2;
}

