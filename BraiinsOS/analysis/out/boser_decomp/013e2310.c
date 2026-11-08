// FUN_013e2310 @ 013e2310 size=272 calls_out=3 calls_in=0
// strings: cannot clone `Sender` -- too many outstanding senders

void FUN_013e2310(undefined4 *param_1,int *param_2,char param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *unaff_r6;
  undefined4 *unaff_r7;
  
  if (param_3 == '\x02') {
    uVar3 = 2;
    param_2 = unaff_r6;
  }
  else {
    uVar6 = param_2[8];
    puVar4 = (uint *)(param_2 + 8);
    DataMemoryBarrier(0xb);
    do {
      if (uVar6 == (param_2[6] ^ 0x7fffffffU)) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("cannot clone `Sender` -- too many outstanding senders",0x35,&DAT_01d2df0c);
      }
      uVar7 = *puVar4;
      if (uVar7 == uVar6) {
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(puVar4);
          if (bVar2) {
            *puVar4 = uVar6 + 1;
            bVar2 = true;
            uVar6 = uVar7;
            goto LAB_013e238c;
          }
          uVar7 = *puVar4;
        } while (uVar7 == uVar6);
      }
      bVar2 = false;
      ClearExclusiveLocal();
      uVar6 = uVar7;
LAB_013e238c:
      DataMemoryBarrier(0xb);
    } while (!bVar2);
    do {
      iVar5 = *param_2;
      bVar2 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar2);
    *param_2 = iVar5 + 1;
    if (iVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x13e241c);
      (*pcVar1)();
    }
    unaff_r7 = (undefined4 *)thunk_FUN_01be5118(0x1c);
    if (unaff_r7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x1c);
    }
    uVar3 = 0;
    unaff_r7[6] = 0;
    *unaff_r7 = 1;
    unaff_r7[1] = 1;
    unaff_r7[2] = 0;
    unaff_r7[3] = 0;
    unaff_r7[4] = 0;
  }
  *(undefined1 *)(param_1 + 2) = uVar3;
  *param_1 = param_2;
  param_1[1] = unaff_r7;
  return;
}

