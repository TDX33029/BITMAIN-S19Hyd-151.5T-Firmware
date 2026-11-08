// FUN_0160a394 @ 0160a394 size=84 calls_out=1 calls_in=1
// strings: 

uint FUN_0160a394(uint param_1,undefined4 param_2,uint param_3,int param_4,byte param_5)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)param_5;
  if (3 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar2,4,&DAT_01d05e50);
  }
  uVar3 = *(uint *)(&DAT_0056c808 + uVar2 * 8);
  lVar1 = (ulonglong)uVar3 * (ulonglong)(uVar3 + param_3);
  return (*(int *)(&DAT_0056c80c + uVar2 * 8) + param_4 + (uint)CARRY4(uVar3,param_3)) * uVar3 +
         (uVar3 + param_3) * *(int *)(&DAT_0056c80c + uVar2 * 8) + (int)((ulonglong)lVar1 >> 0x20) +
         (int)lVar1 & param_1;
}

