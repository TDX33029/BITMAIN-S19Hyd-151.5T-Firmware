// FUN_0127b5bc @ 0127b5bc size=272 calls_out=4 calls_in=3
// strings: 

void FUN_0127b5bc(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_28 [3];
  undefined1 uStack_19;
  
  uVar4 = *(uint *)(param_2 + 0x14);
  if (uVar4 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar5 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar4);
      if ((0x17 < uVar5 - 9) || ((1 << (uVar5 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar5 == 0x66) {
          *(uint *)(param_2 + 0x14) = uVar4 + 1;
          iVar2 = FUN_012c6b8c(param_2,&DAT_0056efac,4);
          if (iVar2 != 0) goto LAB_0127b688;
          uVar1 = 0;
        }
        else {
          if (uVar5 != 0x74) {
            uVar3 = FUN_012c7788(param_2,&uStack_19,&DAT_01c25830);
            iVar2 = FUN_0127dee8(uVar3,param_2);
            goto LAB_0127b688;
          }
          *(uint *)(param_2 + 0x14) = uVar4 + 1;
          iVar2 = FUN_012c6b8c(param_2,"rue",3);
          if (iVar2 != 0) goto LAB_0127b688;
          uVar1 = 1;
        }
        param_1[1] = uVar1;
        uVar1 = 0;
        goto LAB_0127b6a0;
      }
      uVar4 = uVar4 + 1;
      *(uint *)(param_2 + 0x14) = uVar4;
    } while (*(uint *)(param_2 + 0x10) != uVar4);
  }
  local_28[0] = 5;
  iVar2 = FUN_012c6b30(param_2,local_28);
LAB_0127b688:
  *(int *)(param_1 + 4) = iVar2;
  uVar1 = 1;
LAB_0127b6a0:
  *param_1 = uVar1;
  return;
}

