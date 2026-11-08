// FUN_019b057c @ 019b057c size=276 calls_out=5 calls_in=8
// strings: 

void FUN_019b057c(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r7;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int local_30;
  int iStack_2c;
  uint uStack_28;
  undefined4 local_24;
  
  iVar3 = *param_3;
  if (iVar3 == -0x80000000) {
    uVar4 = 0;
  }
  else {
    iVar5 = param_3[1];
    uVar6 = param_3[2];
    if (uVar6 < 8) {
      uVar2 = 0;
      if (uVar6 == 0) {
        uVar7 = 0;
      }
      else {
        do {
          if (*(char *)(iVar5 + uVar2) == '\0') {
            uVar7 = CONCAT44(uVar2,1);
            goto LAB_019b0600;
          }
          uVar2 = uVar2 + 1;
        } while (uVar6 != uVar2);
        uVar7 = (ulonglong)uVar6 << 0x20;
      }
    }
    else {
      uVar7 = FUN_01307168(0,iVar5,uVar6);
    }
LAB_019b0600:
    local_24 = (undefined4)(uVar7 >> 0x20);
    local_30 = iVar3;
    iStack_2c = iVar5;
    uStack_28 = uVar6;
    if ((uVar7 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_005259f8,0x2f,&local_30,&DAT_01d27e84,&DAT_01d275e8);
    }
    uVar8 = FUN_006647b4(&local_30);
    unaff_r7 = (undefined4)((ulonglong)uVar8 >> 0x20);
    uVar4 = (undefined4)uVar8;
  }
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x20);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x20);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  puVar1[2] = param_1;
  puVar1[3] = param_2;
  puVar1[4] = uVar4;
  puVar1[5] = unaff_r7;
  puVar1[6] = 0;
  return;
}

