// FUN_016e1700 @ 016e1700 size=212 calls_out=3 calls_in=15
// strings: 

void FUN_016e1700(undefined4 param_1,uint param_2,int param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined8 uVar4;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_018ddaf8;
  uVar4 = FUN_016e15ac(param_1,&local_18,param_3,0);
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uVar2 = 0;
  if ((int)uVar4 != 0) {
    if (param_3 != 0) {
      if (local_18 < param_2) {
        if (param_2 < local_18 + param_3) {
LAB_016e17cc:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0,0x16e17cc);
          (*pcVar1)();
        }
      }
      else if ((local_18 != param_2) && (local_18 < param_2 + param_3)) goto LAB_016e17cc;
      FUN_016dd1aa(local_18,param_2);
      uVar3 = extraout_r1;
    }
    uVar2 = 1;
  }
  if ((local_14 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,uVar3,local_14 ^ DAT_018ddaf8,0);
  }
  return;
}

