// FUN_01980058 @ 01980058 size=548 calls_out=3 calls_in=12
// strings: creating or truncating a file requires write or append accessthe source path is neither a regular file nor a symlink to a regular file | must specify at least one of read; write; or append access | creating or truncating a file requires write or append accessthe source path is neither a regular file nor a symlink to a regular file

void FUN_01980058(char *param_1,undefined4 param_2,uint *param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  byte bVar12;
  char local_2c;
  undefined2 local_2b;
  char local_29;
  uint local_28;
  
  cVar4 = *(char *)((int)param_3 + 10);
  if ((char)param_3[2] == '\0') {
    if (*(char *)((int)param_3 + 9) == '\0') {
      uVar9 = 0x401;
      if (cVar4 == '\0') {
        bVar1 = (byte)param_3[3];
        bVar12 = *(byte *)((int)param_3 + 0xb);
        bVar11 = *(byte *)((int)param_3 + 0xd);
        if ((bVar1 == 0 && bVar11 == 0) && (bVar12 == 0)) {
          uVar8 = 0x3a;
          pcVar5 = "must specify at least one of read, write, or append access";
        }
        else {
          uVar8 = 0x3d;
          pcVar5 = 
          "creating or truncating a file requires write or append accessthe source path is neither a regular file nor a symlink to a regular file"
          ;
        }
        FUN_019a18a8(&local_2c,0x14,pcVar5,uVar8);
        if (local_2c != '\x04') goto LAB_019801e0;
        uVar9 = local_28;
        goto LAB_019801a0;
      }
    }
    else {
      uVar6 = 1;
      uVar9 = 0x401;
      if (cVar4 == '\0') goto LAB_019800b4;
    }
LAB_019800f0:
    bVar12 = *(byte *)((int)param_3 + 0xb);
    bVar1 = *(byte *)((int)param_3 + 0xd);
    uVar6 = uVar9;
    if ((bVar12 == 1) && ((bVar1 & 1) == 0)) {
LAB_019801ac:
      FUN_019a18a8(&local_2c,0x14,
                   "creating or truncating a file requires write or append accessthe source path is neither a regular file nor a symlink to a regular file"
                   ,0x3d);
      if (local_2c != '\x04') {
LAB_019801e0:
        param_1[3] = local_29;
        *(undefined2 *)(param_1 + 1) = local_2b;
        *(uint *)(param_1 + 4) = local_28;
        *param_1 = local_2c;
        return;
      }
      uVar7 = local_28;
      uVar6 = uVar9;
      goto LAB_01980210;
    }
  }
  else {
    if (*(char *)((int)param_3 + 9) == '\0') {
      uVar9 = 0x402;
      if (cVar4 != '\0') goto LAB_019800f0;
      bVar12 = *(byte *)((int)param_3 + 0xb);
      bVar1 = (byte)param_3[3];
      bVar11 = *(byte *)((int)param_3 + 0xd);
      uVar9 = 0;
LAB_019801a0:
      if (((bVar12 & 1) == 0 && (bVar1 & 1) == 0) && (uVar7 = 0, uVar6 = uVar9, (bVar11 & 1) == 0))
      goto LAB_01980210;
      goto LAB_019801ac;
    }
    uVar6 = 2;
    uVar9 = 0x402;
    if (cVar4 != '\0') goto LAB_019800f0;
LAB_019800b4:
    bVar12 = *(byte *)((int)param_3 + 0xb);
    bVar1 = *(byte *)((int)param_3 + 0xd);
  }
  if ((char)param_3[3] == '\0') {
    uVar7 = 0;
    if ((bVar12 & 1) != 0) {
      uVar7 = 0x200;
    }
  }
  else {
    uVar7 = 0x40;
    if ((bVar12 & 1) != 0) {
      uVar7 = 0x240;
    }
  }
  if ((bVar1 & 1) != 0) {
    uVar7 = 0xc0;
  }
LAB_01980210:
  uVar9 = *param_3;
  uVar10 = param_3[1];
  do {
    iVar2 = FUN_01be34a6(param_2,uVar6 | uVar7 | uVar9 & 0xffd7fffc | 0x80000,uVar10);
    if (iVar2 != -1) {
      cVar4 = '\x04';
      *(int *)(param_1 + 4) = iVar2;
      goto LAB_01980270;
    }
    piVar3 = (int *)FUN_01be3244();
  } while (*piVar3 == 4);
  cVar4 = '\0';
  *(int *)(param_1 + 4) = *piVar3;
  param_1[3] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
LAB_01980270:
  *param_1 = cVar4;
  return;
}

