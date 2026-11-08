// FUN_0163b4f4 @ 0163b4f4 size=444 calls_out=2 calls_in=2
// strings: assertion failed: actual_state == EMPTY || actual_state == NOTIFIED | assertion failed: self.tail.is_none()

longlong FUN_0163b4f4(undefined4 *param_1,uint *param_2,uint param_3,uint param_4)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint unaff_r9;
  
  switch(param_3 & 3) {
  default:
    uVar3 = *param_2;
    if (uVar3 == param_3) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(param_2);
        if (bVar1) {
          *param_2 = param_3 & 0xfffffffc | 2;
          DataMemoryBarrier(0xb);
          return (ulonglong)unaff_r9 << 0x20;
        }
        uVar3 = *param_2;
      } while (uVar3 == param_3);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    if ((uVar3 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: actual_state == EMPTY || actual_state == NOTIFIED",0x43,
                   &DAT_018ac6ac);
    }
    iVar7 = 0;
    param_3 = uVar3 & 0xfffffffc | 2;
    break;
  case 1:
    if ((param_4 & 1) == 0) {
      piVar4 = (int *)param_1[1];
      if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018ac6bc);
      }
      iVar6 = *piVar4;
      param_1[1] = iVar6;
      if (iVar6 == 0) {
        puVar5 = (undefined4 *)0x0;
        *param_1 = 0;
      }
      else {
        puVar5 = (undefined4 *)*param_1;
        *(undefined4 *)(iVar6 + 4) = 0;
      }
      iVar6 = 1;
    }
    else {
      piVar4 = (int *)*param_1;
      if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018ac6cc);
      }
      puVar5 = (undefined4 *)piVar4[1];
      *param_1 = puVar5;
      iVar6 = 5;
      if (puVar5 == (undefined4 *)0x0) {
        param_1[1] = 0;
      }
      else {
        *puVar5 = 0;
      }
    }
    *piVar4 = 0;
    piVar4[1] = 0;
    iVar7 = (int)*(longlong *)(piVar4 + 2);
    unaff_r9 = piVar4[3];
    lVar2 = *(longlong *)(piVar4 + 2);
    piVar4[2] = 0;
    DataMemoryBarrier(0xb);
    piVar4[4] = iVar6;
    if (puVar5 != (undefined4 *)0x0) {
      return lVar2;
    }
    if (param_1[1] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: self.tail.is_none()",0x25,&DAT_018acf1c);
    }
    param_3 = param_3 & 0xfffffffc;
    break;
  case 3:
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018ac6dc);
  }
  DataMemoryBarrier(0xb);
  *param_2 = param_3;
  DataMemoryBarrier(0xb);
  return CONCAT44(unaff_r9,iVar7);
}

