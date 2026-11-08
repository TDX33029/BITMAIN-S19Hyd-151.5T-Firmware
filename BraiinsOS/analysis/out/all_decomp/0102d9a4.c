// FUN_0102d9a4 @ 0102d9a4 size=380 calls_out=1 calls_in=3
// strings: 

void FUN_0102d9a4(undefined1 *param_1,uint param_2,undefined4 *param_3,int *param_4)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int local_24;
  int *local_20;
  code *local_1c;
  
  iVar5 = *param_4;
  uVar3 = param_4[1];
  local_20 = &local_24;
  local_24 = param_4[2];
  if (((uVar3 < *(uint *)(iVar5 + 0x38)) &&
      (piVar2 = (int *)(*(int *)(iVar5 + 0x34) + uVar3 * 0xf8), *piVar2 != 3 || piVar2[1] != 0)) &&
     (piVar2[0x35] == local_24)) {
    cVar4 = *(byte *)(piVar2 + 8) - 6;
    if (*(byte *)(piVar2 + 8) < 6) {
      cVar4 = '\x06';
    }
    if ((cVar4 != '\x05' && cVar4 != '\x03') || (*(char *)((int)piVar2 + 0x21) == '\0')) {
      *param_1 = 2;
      return;
    }
    if (*(char *)((int)piVar2 + 0xeb) == '\0') {
      uVar6 = (**(code **)*param_3)(param_3[1]);
      if (piVar2[0x10] != 0) {
        (**(code **)(piVar2[0x10] + 0xc))(piVar2[0x11]);
      }
      *(undefined8 *)(piVar2 + 0x10) = uVar6;
      *param_1 = 3;
      return;
    }
    *(undefined1 *)((int)piVar2 + 0xeb) = 0;
    if (((uVar3 < *(uint *)(iVar5 + 0x38)) &&
        (piVar2 = (int *)(*(int *)(iVar5 + 0x34) + uVar3 * 0xf8), *piVar2 != 3 || piVar2[1] != 0))
       && (piVar2[0x35] == local_24)) {
      uVar3 = piVar2[0xf];
      uVar1 = piVar2[0x38];
      *param_1 = 0;
      uVar3 = uVar3 & ~((int)uVar3 >> 0x1f);
      if (param_2 < uVar3) {
        uVar3 = param_2;
      }
      iVar5 = uVar3 - uVar1;
      if (uVar3 < uVar1) {
        iVar5 = 0;
      }
      *(int *)(param_1 + 4) = iVar5;
      return;
    }
  }
  local_1c = FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_00599806,&local_20,&DAT_01882550,local_24,uVar3);
}

