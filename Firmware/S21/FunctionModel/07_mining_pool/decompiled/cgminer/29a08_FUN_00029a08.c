// FUN_00029a08 @ 00029a08  size=420  callers=2
// program: cgminer


void FUN_00029a08(int param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  char local_818 [2052];
  
  if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (3 < DAT_00067848)) {
    snprintf(local_818,0x800,"Thread %d being disabled",param_2);
    FUN_0001dd98(4,local_818,0);
  }
  cVar1 = DAT_000686f1;
  iVar2 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  if ((cVar1 != '\0') && (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848))))
  {
    builtin_strncpy(local_818,"Waiting on sem in miner thread",0x1f);
    FUN_0001dd98(7,local_818,0);
  }
  FUN_00023050(param_1 + 0x10,"cgminer.c","mt_disable",0x2411);
  if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (3 < DAT_00067848)) {
    snprintf(local_818,0x800,"Thread %d being re-enabled",param_2);
    FUN_0001dd98(4,local_818,0);
  }
  (*(code *)*param_3)(param_1);
  return;
}

