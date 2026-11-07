// FUN_019d7458 @ 019d7458 size=324 calls_out=1 calls_in=1
// strings: assertion failed: curr.is_join_interested() | assertion failed: !curr.is_join_waker_set() | assertion failed: snapshot.is_join_interested() | assertion failed: !snapshot.is_join_waker_set()

undefined8
FUN_019d7458(uint *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  
  if ((param_5 & 8) == 0) {
    puVar6 = &DAT_01d28c74;
    pcVar4 = "assertion failed: snapshot.is_join_interested()";
  }
  else {
    if ((param_5 & 0x10) == 0) {
      if (*(int *)(param_2 + 8) != 0) {
        (**(code **)(*(int *)(param_2 + 8) + 0xc))(*(undefined4 *)(param_2 + 0xc));
      }
      *(undefined4 *)(param_2 + 8) = param_3;
      *(undefined4 *)(param_2 + 0xc) = param_4;
      DataMemoryBarrier(0xb);
      uVar7 = *param_1;
      do {
        if ((uVar7 & 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: curr.is_join_interested()",0x2b,&DAT_01d28d34);
        }
        if ((uVar7 & 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: !curr.is_join_waker_set()",0x2b,&DAT_01d28d44);
        }
        if ((uVar7 & 2) != 0) {
          if (*(int *)(param_2 + 8) != 0) {
            (**(code **)(*(int *)(param_2 + 8) + 0xc))(*(undefined4 *)(param_2 + 0xc));
          }
          *(undefined4 *)(param_2 + 8) = 0;
          uVar3 = 1;
          goto LAB_019d7538;
        }
        uVar2 = *param_1;
        uVar5 = uVar7 | 0x10;
        if (uVar2 == uVar7) {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(param_1);
            if (bVar1) {
              *param_1 = uVar5;
              bVar1 = true;
              goto LAB_019d74f8;
            }
            uVar2 = *param_1;
          } while (uVar2 == uVar7);
        }
        bVar1 = false;
        ClearExclusiveLocal();
LAB_019d74f8:
        DataMemoryBarrier(0xb);
        uVar7 = uVar2;
      } while (!bVar1);
      uVar3 = 0;
      uVar7 = uVar5;
LAB_019d7538:
      return CONCAT44(uVar7,uVar3);
    }
    puVar6 = &DAT_01d28c84;
    pcVar4 = "assertion failed: !snapshot.is_join_waker_set()";
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb0ec(pcVar4,0x2f,puVar6);
}

