// FUN_01261fac @ 01261fac size=212 calls_out=3 calls_in=5
// strings: json-schema

int * FUN_01261fac(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  do {
    iVar3 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1262010);
    (*pcVar1)();
  }
  uVar5 = param_1[7];
  if (uVar5 != 0) {
    iVar3 = param_1[3];
    uVar4 = param_1[4];
    if (uVar5 < uVar4) {
      if (*(char *)(iVar3 + uVar5) < -0x40) {
LAB_01261ffc:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(iVar3,uVar4,0,uVar5,&DAT_018821a4);
      }
    }
    else if (uVar5 != uVar4) goto LAB_01261ffc;
    if ((uVar5 == 0xb) && (iVar3 = thunk_FUN_016dd50a(iVar3,"json-schema",0xb), iVar3 == 0)) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *param_1;
        bVar2 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar2);
      *param_1 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_013532e4(param_1);
      }
      return (int *)0x0;
    }
  }
  return param_1;
}

