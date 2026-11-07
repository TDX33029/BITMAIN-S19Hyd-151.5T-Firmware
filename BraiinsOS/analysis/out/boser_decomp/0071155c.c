// FUN_0071155c @ 0071155c size=148 calls_out=4 calls_in=3
// strings: 

void FUN_0071155c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 uStack_11;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&uStack_11,&DAT_01c073cc,&DAT_01c073dc);
  }
  uVar4 = FUN_006665a4(1,param_1);
  iVar3 = (int)((ulonglong)uVar4 >> 0x20);
  puVar1 = (undefined4 *)uVar4;
  if (iVar3 == 0) {
    puVar2 = puVar1;
  }
  else {
    puVar2 = (undefined4 *)FUN_01298504(iVar3,puVar1);
  }
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(puVar1,iVar3);
  }
  *puVar2 = 1;
  puVar2[1] = 1;
  return;
}

