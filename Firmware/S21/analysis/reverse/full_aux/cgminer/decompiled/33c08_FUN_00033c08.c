// FUN_00033c08 @ 00033c08  size=344  callers=0
// program: cgminer


void FUN_00033c08(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6,uint param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *unaff_r11;
  
  iVar2 = FUN_0002d974();
  *param_2 = iVar2;
  uVar3 = *param_1;
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)(param_3 + 0xd4));
  if (iVar2 == 0) {
    iVar2 = pthread_rwlock_wrlock((pthread_rwlock_t *)(param_3 + 0xec));
    if (iVar2 == 0) {
      unaff_r11 = "get_work_by_nonce2";
      param_7 = param_7 << 0x18 | (param_7 >> 8 & 0xff) << 0x10 | (param_7 >> 0x10 & 0xff) << 8 |
                param_7 >> 0x18;
      *(undefined4 *)(param_3 + 0x280) = param_5;
      *(undefined4 *)(param_3 + 0x284) = param_6;
      FUN_00023324(param_3 + 0x63c,&param_7,4,"cgminer.c","get_work_by_nonce2",0x20e0);
      iVar2 = pthread_rwlock_unlock((pthread_rwlock_t *)(param_3 + 0xec));
      if (iVar2 == 0) {
        iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_3 + 0xd4));
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0002cc1c("get_work_by_nonce2",0x20e1);
        }
        (*DAT_0006796c)();
        FUN_00033628(param_3,*param_2);
        uVar1 = DAT_00068cac;
        *(undefined4 *)(*param_2 + 0x104) = param_4;
        *(undefined4 *)(*param_2 + 0x100) = uVar3;
        *(undefined4 *)(*param_2 + 0x150) = uVar1;
        *(int *)(*(int *)(*param_2 + 0x104) + 0x44) =
             *(int *)(*(int *)(*param_2 + 0x104) + 0x44) + 1;
        *(undefined1 *)(*param_2 + 0x110) = 1;
        *(uint *)(*param_2 + 0x1bc) = param_7;
        return;
      }
      goto LAB_00033d48;
    }
  }
  else {
    FUN_0002cbc0("get_work_by_nonce2",0x20dd);
  }
  FUN_0002cb64("get_work_by_nonce2",0x20dd);
LAB_00033d48:
                    /* WARNING: Subroutine does not return */
  FUN_0002d70c(unaff_r11,0x20e1);
}

