// FUN_012c34c0 @ 012c34c0 size=464 calls_out=8 calls_in=1
// strings: unexpected BufErrorstruct StockConfig | encode after complete | internal error: entered unreachable code

void FUN_012c34c0(uint *param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint extraout_r1;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  do {
    if (*(int *)(param_2 + 0x38) == 0) {
      FUN_012c22b4(param_4,(uint *)(param_2 + 0x3c));
      uVar1 = *(uint *)(param_2 + 0x3c);
      if (10 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar1,10,10,&DAT_01ce29dc);
      }
      if (uVar1 == 10) {
        *(undefined4 *)(param_2 + 0x38) = 1;
      }
    }
    else {
      if (*(int *)(param_2 + 0x38) != 1) {
        FUN_012c2414(param_1,"encode after complete",0x15);
        return;
      }
      FUN_012c236c(param_3);
      *(undefined1 *)(param_2 + 0x18) = 0;
      FUN_012c33d8(&local_30,param_2,param_3,param_4,0);
      if ((char)local_30 == '\x04') {
        uVar1 = local_30 >> 8 & 0xff;
LAB_012c357c:
        if ((uVar1 & 0xff) != 0) {
          if ((uVar1 & 0xff) != 1) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01ce2a68);
          }
          FUN_012c2414(&local_38,"unexpected BufErrorstruct StockConfig",0x13);
          if ((char)local_38 != '\x04') goto LAB_012c35bc;
        }
      }
      else {
        if ((local_30 & 0xff) == 4) {
          uVar1 = local_30 >> 8;
          goto LAB_012c357c;
        }
        local_38 = local_30;
        local_34 = local_2c;
LAB_012c35bc:
        if ((local_38 & 0xff) != 4) {
          *param_1 = local_38;
          param_1[1] = local_34;
          return;
        }
      }
      uVar5 = FUN_012c236c(param_3);
      uVar1 = (uint)((ulonglong)uVar5 >> 0x20);
      if (uVar1 < extraout_r1) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(extraout_r1,uVar1,uVar1,&DAT_01ce2a58);
      }
      *(uint *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + (uVar1 - extraout_r1);
      FUN_0130a5b0(param_2 + 0x20,(int)uVar5 + extraout_r1);
    }
    uVar5 = FUN_012c2334(param_3);
    iVar2 = (int)uVar5;
    bVar4 = (int)((ulonglong)uVar5 >> 0x20) != 0;
    iVar3 = 0;
    if (bVar4) {
      iVar2 = *(int *)(param_4 + 4);
      iVar3 = *(int *)(param_4 + 8);
    }
    if (!bVar4 || iVar3 == iVar2) {
      *(undefined1 *)param_1 = 4;
      return;
    }
  } while( true );
}

