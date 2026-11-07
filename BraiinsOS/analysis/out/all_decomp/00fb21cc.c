// FUN_00fb21cc @ 00fb21cc size=112 calls_out=0 calls_in=0
// strings: 

undefined4 FUN_00fb21cc(undefined4 *param_1,int param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)param_1[2];
  uVar2 = *param_1;
  iVar4 = param_1[1];
  if ((*pcVar3 == '\0') || (iVar1 = (**(code **)(iVar4 + 0xc))(uVar2,&DAT_00567348,4), iVar1 == 0))
  {
    UNRECOVERED_JUMPTABLE = *(code **)(iVar4 + 0x10);
    *pcVar3 = param_2 == 10;
                    /* WARNING: Could not recover jumptable at 0x00fb2238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar2);
    return uVar2;
  }
  return 1;
}

