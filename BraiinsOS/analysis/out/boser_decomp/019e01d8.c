// FUN_019e01d8 @ 019e01d8 size=440 calls_out=2 calls_in=2
// strings: internal error: entered unreachable code | assertion failed: actual_state == EMPTY || actual_state == NOTIFIED | assertion failed: self.tail.is_none()

undefined8 FUN_019e01d8(undefined4 *param_1,uint *param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  puVar5 = &switchD_019e01e8::switchdataD_019e01ec;
  switch(param_3 & 3) {
  default:
    uVar2 = *param_2;
    if (uVar2 == param_3) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(param_2);
        if (bVar1) {
          *param_2 = param_3 & 0xfffffffc | 2;
          bVar1 = true;
          goto LAB_019e0274;
        }
        uVar2 = *param_2;
      } while (uVar2 == param_3);
    }
    bVar1 = false;
    ClearExclusiveLocal();
LAB_019e0274:
    DataMemoryBarrier(0xb);
    if (bVar1) {
      iVar6 = 0;
      goto LAB_019e0334;
    }
    if ((uVar2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: actual_state == EMPTY || actual_state == NOTIFIED",0x43,
                   &DAT_01d28f8c);
    }
    iVar6 = 0;
    param_3 = uVar2 & 0xfffffffc | 2;
    break;
  case 1:
    if ((param_4 & 1) == 0) {
      piVar3 = (int *)param_1[1];
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d28f9c);
      }
      iVar7 = *piVar3;
      param_1[1] = iVar7;
      if (iVar7 == 0) {
        puVar4 = (undefined4 *)0x0;
        *param_1 = 0;
      }
      else {
        puVar4 = (undefined4 *)*param_1;
        *(undefined4 *)(iVar7 + 4) = 0;
      }
      iVar8 = 1;
    }
    else {
      piVar3 = (int *)*param_1;
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d28fac);
      }
      puVar4 = (undefined4 *)piVar3[1];
      *param_1 = puVar4;
      if (puVar4 == (undefined4 *)0x0) {
        iVar7 = 0;
        param_1[1] = 0;
      }
      else {
        iVar7 = param_1[1];
        *puVar4 = 0;
      }
      iVar8 = 5;
    }
    *piVar3 = 0;
    piVar3[1] = 0;
    iVar6 = piVar3[2];
    puVar5 = (uint *)piVar3[3];
    piVar3[2] = 0;
    DataMemoryBarrier(0xb);
    piVar3[4] = iVar8;
    if ((puVar4 == (undefined4 *)0x0) && (iVar7 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: self.tail.is_none()",0x25,&DAT_01d2900c);
    }
    if (puVar4 != (undefined4 *)0x0) goto LAB_019e0334;
    param_3 = param_3 & 0xfffffffc;
    break;
  case 3:
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d28fbc);
  }
  DataMemoryBarrier(0xb);
  *param_2 = param_3;
  DataMemoryBarrier(0xb);
LAB_019e0334:
  return CONCAT44(puVar5,iVar6);
}

