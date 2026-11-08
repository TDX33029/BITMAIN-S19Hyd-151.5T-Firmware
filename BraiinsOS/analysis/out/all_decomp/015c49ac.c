// FUN_015c49ac @ 015c49ac size=580 calls_out=3 calls_in=12
// strings: creating or truncating a file requires write or append access | creating or truncating a file requires write or append access | must specify at least one of read; write; or append access

void FUN_015c49ac(char *param_1,undefined4 param_2,uint *param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char local_2c;
  undefined2 local_2b;
  char local_29;
  uint local_28;
  
  cVar1 = *(char *)((int)param_3 + 10);
  if ((char)param_3[2] == '\0') {
    if (*(char *)((int)param_3 + 9) == '\0') {
      uVar8 = 0x401;
      if (cVar1 == '\0') {
        uVar6 = param_3[3];
        bVar5 = *(byte *)((int)param_3 + 0xb);
        bVar2 = *(byte *)((int)param_3 + 0xd);
        if (((byte)uVar6 == 0 && bVar2 == 0) && (bVar5 == 0)) {
          FUN_015e79d4(&local_2c,0x14,"must specify at least one of read, write, or append access",
                       0x3a);
          uVar8 = local_28;
        }
        else {
          FUN_015e79d4(&local_2c,0x14,
                       "creating or truncating a file requires write or append access",0x3d);
          uVar8 = local_28;
        }
        local_28 = uVar8;
        if (local_2c != '\x04') goto LAB_015c4bcc;
        if ((bVar5 & 1) == 0 && ((byte)uVar6 & 1) == 0) goto LAB_015c4b90;
        goto LAB_015c4a68;
      }
    }
    else {
      uVar6 = 1;
      uVar8 = 0x401;
      if (cVar1 == '\0') goto LAB_015c4a08;
    }
LAB_015c4a50:
    bVar5 = *(byte *)((int)param_3 + 0xb);
    bVar2 = *(byte *)((int)param_3 + 0xd);
    uVar6 = uVar8;
    if ((bVar5 != 1) || ((bVar2 & 1) != 0)) {
LAB_015c4a9c:
      if ((char)param_3[3] == '\0') {
        uVar7 = 0;
        if ((bVar5 & 1) != 0) {
          uVar7 = 0x200;
        }
      }
      else {
        uVar7 = 0x40;
        if ((bVar5 & 1) != 0) {
          uVar7 = 0x240;
        }
      }
      uVar8 = uVar6;
      if ((bVar2 & 1) != 0) {
        uVar7 = 0xc0;
      }
      goto LAB_015c4ac8;
    }
  }
  else {
    if (*(char *)((int)param_3 + 9) != '\0') {
      uVar6 = 2;
      uVar8 = 0x402;
      if (cVar1 != '\0') goto LAB_015c4a50;
LAB_015c4a08:
      bVar5 = *(byte *)((int)param_3 + 0xb);
      bVar2 = *(byte *)((int)param_3 + 0xd);
      goto LAB_015c4a9c;
    }
    uVar8 = 0x402;
    if (cVar1 != '\0') goto LAB_015c4a50;
    uVar8 = 0;
    bVar2 = *(byte *)((int)param_3 + 0xd);
    if ((*(byte *)((int)param_3 + 0xb) & 1) == 0 && (param_3[3] & 1) == 0) {
LAB_015c4b90:
      uVar7 = 0;
      if ((bVar2 & 1) == 0) goto LAB_015c4ac8;
    }
  }
LAB_015c4a68:
  FUN_015e79d4(&local_2c,0x14,"creating or truncating a file requires write or append access",0x3d);
  if (local_2c != '\x04') {
LAB_015c4bcc:
    param_1[3] = local_29;
    *(undefined2 *)(param_1 + 1) = local_2b;
    *(uint *)(param_1 + 4) = local_28;
    *param_1 = local_2c;
    return;
  }
  uVar7 = local_28;
LAB_015c4ac8:
  uVar6 = *param_3;
  uVar9 = param_3[1];
  do {
    iVar3 = FUN_016d2e2a(param_2,uVar8 | uVar7 | uVar6 & 0xffd7fffc | 0x80000,uVar9);
    if (iVar3 != -1) {
      *(int *)(param_1 + 4) = iVar3;
      *param_1 = '\x04';
      return;
    }
    piVar4 = (int *)FUN_016d2bc8();
  } while (*piVar4 == 4);
  *(int *)(param_1 + 4) = *piVar4;
  param_1[3] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  *param_1 = '\0';
  return;
}

