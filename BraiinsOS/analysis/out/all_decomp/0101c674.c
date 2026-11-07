// FUN_0101c674 @ 0101c674 size=324 calls_out=1 calls_in=4
// strings: 

ulonglong FUN_0101c674(int param_1,int *param_2)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  undefined *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int local_1c;
  int *local_18;
  code *local_14;
  
  local_18 = &local_1c;
  piVar5 = (int *)*param_2;
  uVar3 = param_2[1];
  local_1c = param_2[2];
  if (((uVar3 < (uint)piVar5[0xe]) &&
      (piVar2 = (int *)(piVar5[0xd] + uVar3 * 0xf8), *piVar2 != 3 || piVar2[1] != 0)) &&
     (piVar2[0x35] == local_1c)) {
    if ((char)piVar2[0x3b] != '\0') {
      return CONCAT44(piVar2,(uint)DAT_018dd947);
    }
    iVar7 = *(int *)(param_1 + 0x28);
    *(undefined1 *)(piVar2 + 0x3b) = 1;
    bVar1 = DAT_018dd947;
    if (iVar7 == 0) {
      *(undefined4 *)(param_1 + 0x28) = 1;
      *(uint *)(param_1 + 0x2c) = uVar3;
      *(int *)(param_1 + 0x30) = local_1c;
      *(uint *)(param_1 + 0x34) = uVar3;
      *(int *)(param_1 + 0x38) = local_1c;
      return (ulonglong)CONCAT14(bVar1,param_1);
    }
    uVar6 = *(uint *)(param_1 + 0x34);
    if (((uVar6 < (uint)piVar5[0xe]) &&
        (piVar5 = (int *)(piVar5[0xd] + uVar6 * 0xf8), *piVar5 != 3 || piVar5[1] != 0)) &&
       (piVar5[0x35] == *(int *)(param_1 + 0x38))) {
      piVar5[0x21] = 1;
      piVar5[0x22] = uVar3;
      piVar5[0x23] = local_1c;
      *(uint *)(param_1 + 0x34) = uVar3;
      *(int *)(param_1 + 0x38) = local_1c;
      return CONCAT44(1,param_1);
    }
    puVar4 = &DAT_01882560;
    uVar3 = uVar6;
    local_1c = *(int *)(param_1 + 0x38);
  }
  else {
    puVar4 = &DAT_01882550;
  }
  local_14 = FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_00599806,&local_18,puVar4,piVar5,uVar3);
}

