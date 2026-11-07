// FUN_0138b198 @ 0138b198 size=352 calls_out=4 calls_in=4
// strings: assertion failed: slot.next.is_none() | invalid key

void FUN_0138b198(undefined4 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_140;
  int local_13c;
  undefined1 auStack_138 [128];
  int local_b8;
  int local_b4;
  undefined1 auStack_b0 [140];
  
  if (*param_2 != 1) {
    *param_1 = 6;
    param_1[1] = 0;
    return;
  }
  uVar5 = param_2[1];
  if (uVar5 < *(uint *)(param_3 + 8)) {
    uVar1 = param_2[2];
    iVar6 = *(int *)(param_3 + 0x10);
    piVar4 = (int *)(*(int *)(param_3 + 4) + uVar5 * 0x90);
    iVar2 = *piVar4;
    iVar3 = piVar4[1];
    FUN_01bed4e2(auStack_b0,piVar4 + 2,0x88);
    piVar4[1] = 0;
    piVar4[2] = iVar6;
    *piVar4 = 6;
    if (iVar2 != 6 || iVar3 != 0) {
      FUN_01bed4e2(auStack_138,auStack_b0,0x88);
      *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + -1;
      *(uint *)(param_3 + 0x10) = uVar5;
      local_140 = iVar2;
      local_13c = iVar3;
      if (uVar5 == uVar1) {
        if (local_b8 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: slot.next.is_none()",0x25,&DAT_01d2d804);
        }
        *param_2 = 0;
      }
      else {
        bVar7 = local_b8 == 0;
        local_b8 = 0;
        if (bVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d2d7f4);
        }
        *param_2 = 1;
        param_2[1] = local_b4;
      }
      FUN_01bed4e2(param_1,&local_140,0x88);
      return;
    }
    FUN_01bed4e2(piVar4 + 2,auStack_b0,0x88);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0130739c("invalid key",0xb,&DAT_01d2d7e4);
}

