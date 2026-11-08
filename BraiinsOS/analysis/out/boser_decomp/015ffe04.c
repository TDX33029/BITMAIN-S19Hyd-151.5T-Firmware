// FUN_015ffe04 @ 015ffe04 size=260 calls_out=2 calls_in=1
// strings: 

void FUN_015ffe04(undefined1 *param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char local_18;
  undefined1 local_17;
  undefined *local_14;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
    *param_1 = 1;
    iVar1 = 8;
    *(undefined **)(param_1 + 4) = &DAT_004ba595;
    local_14 = (undefined *)0x6;
  }
  else {
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    if (uVar5 < uVar4) goto LAB_015ffe9c;
    if (uVar4 != 0) {
      if (uVar4 < uVar3) {
        if (*(char *)(iVar1 + uVar4) < -0x40) goto LAB_015ffe9c;
      }
      else if (uVar3 != uVar4) goto LAB_015ffe9c;
    }
    if (uVar5 != 0) {
      if (uVar5 < uVar3) {
        if (*(char *)(iVar1 + uVar5) < -0x40) {
LAB_015ffe9c:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514();
        }
      }
      else if (uVar5 != uVar3) goto LAB_015ffe9c;
    }
    FUN_0160058c(&local_18,iVar1 + uVar4,uVar5 - uVar4);
    if (local_18 == '\x01') {
      param_1[1] = local_17;
      local_14 = &DAT_004ba595;
      *(undefined4 *)(param_1 + 8) = 6;
      uVar2 = 2;
    }
    else {
      uVar2 = 6;
    }
    *param_1 = uVar2;
    iVar1 = 4;
  }
  *(undefined **)(param_1 + iVar1) = local_14;
  return;
}

