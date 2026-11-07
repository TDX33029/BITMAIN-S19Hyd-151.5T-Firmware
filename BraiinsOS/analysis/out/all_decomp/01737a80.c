// FUN_01737a80 @ 01737a80 size=380 calls_out=7 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_ec.c

void FUN_01737a80(int param_1,undefined1 *param_2,uint *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint local_64;
  undefined1 auStack_60 [68];
  uint local_1c;
  
  local_64 = 0x42;
  local_1c = DAT_018ddaf8;
  if ((*(int *)(param_1 + 8) == 0) || (*(int *)(param_1 + 0xc) == 0)) {
    FUN_016e9cd0(6,0,0x75,"/aws-lc/crypto/fipsmodule/evp/p_ec.c",0x61);
    uVar4 = extraout_r1_00;
LAB_01737b88:
    uVar2 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
    if (param_2 == (undefined1 *)0x0) {
      FUN_0172ca8c(uVar4);
      uVar5 = FUN_0172c69c();
      uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
      *param_3 = (int)uVar5 + 7U >> 3;
    }
    else {
      uVar2 = FUN_0172cabc(*(undefined4 *)(*(int *)(param_1 + 0xc) + 8));
      uVar5 = FUN_01737858(auStack_60,&local_64,uVar2,uVar4);
      uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
      if ((int)uVar5 == 0) goto LAB_01737b88;
      uVar3 = *param_3;
      if (local_64 < *param_3) {
        *param_3 = local_64;
        uVar3 = local_64;
      }
      if (uVar3 != 0) {
        if ((((param_2 < auStack_60) && (auStack_60 < param_2 + uVar3)) ||
            ((auStack_60 < param_2 && (param_2 < auStack_60 + uVar3)))) || (0x42 < uVar3)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0,0x1737bd8);
          (*pcVar1)();
        }
        FUN_016dd1aa(param_2,auStack_60);
        uVar4 = extraout_r1;
      }
    }
    uVar2 = 1;
  }
  if ((local_1c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,uVar4,local_1c ^ DAT_018ddaf8,0);
  }
  return;
}

