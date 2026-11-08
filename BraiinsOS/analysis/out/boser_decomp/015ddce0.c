// FUN_015ddce0 @ 015ddce0 size=228 calls_out=1 calls_in=0
// strings: record | DnsSrv | priority | weight

void FUN_015ddce0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int local_28;
  
  iVar1 = *param_1;
  local_28 = iVar1 + 0x50;
  FUN_0130400c(param_2,"DnsSrv",6,"record",6,iVar1,FUN_015dde1c,"priority",8,iVar1 + 0x4c,
               &LAB_013cb7d4,"weight",6,iVar1 + 0x4e,&LAB_013cb7d4,&DAT_0056d4cc,4,iVar1 + 0x40,
               &LAB_005fdc1c,&DAT_0056f388,4,&local_28,&DAT_0134ae98);
  return;
}

