// FUN_012fbf3c @ 012fbf3c size=1712 calls_out=9 calls_in=7
// strings: 

void FUN_012fbf3c(int *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 local_40;
  uint uStack_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined1 local_25;
  undefined4 local_24;
  
  if (*(char *)(param_2 + 0xc) == '\x01') {
    uVar7 = *(undefined4 *)(param_2 + 4);
    uVar5 = *(undefined4 *)(param_2 + 8);
    uVar4 = *(uint *)(param_3 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x1c);
    if (uVar4 - uVar2 < 5) {
      local_40 = 10;
      uStack_3c = uStack_3c & 0xffffff00;
      FUN_01328914(&local_38,param_3,&local_40,1);
      if (local_38 != 4) goto LAB_012fc5c4;
    }
    else {
      if (uVar4 < uVar2) goto LAB_012fc5d8;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 10;
      *(uint *)(param_3 + 0x1c) = uVar2 + 1;
    }
    FUN_01328ef8(&local_38,param_3,uVar5);
    if ((local_38 != 4) || (FUN_01328914(&local_38,param_3,uVar7,uVar5), local_38 != 4))
    goto LAB_012fc5c4;
  }
  if (*(char *)(param_2 + 0x1c) != '\0') {
    uVar7 = *(undefined4 *)(param_2 + 0x14);
    uVar5 = *(undefined4 *)(param_2 + 0x18);
    uVar4 = *(uint *)(param_3 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x1c);
    if (uVar4 - uVar2 < 5) {
      local_40 = 0x42;
      uStack_3c = uStack_3c & 0xffffff00;
      FUN_01328914(&local_38,param_3,&local_40,1);
      if (local_38 != 4) goto LAB_012fc5c4;
    }
    else {
      if (uVar4 < uVar2) goto LAB_012fc5d8;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 0x42;
      *(uint *)(param_3 + 0x1c) = uVar2 + 1;
    }
    FUN_01328ef8(&local_38,param_3,uVar5);
    if ((local_38 != 4) || (FUN_01328914(&local_38,param_3,uVar7,uVar5), local_38 != 4))
    goto LAB_012fc5c4;
  }
  if ((((*(byte *)(param_2 + 0xb8) == 2) ||
       (FUN_01329168(&local_38,param_3,10,*(byte *)(param_2 + 0xb8) & 1), local_38 == 4)) &&
      ((*(byte *)(param_2 + 0xb9) == 2 ||
       (FUN_01329168(&local_38,param_3,0x14,*(byte *)(param_2 + 0xb9) & 1), local_38 == 4)))) &&
     ((*(byte *)(param_2 + 0xba) == 2 ||
      (FUN_01329168(&local_38,param_3,0x1b,*(byte *)(param_2 + 0xba) & 1), local_38 == 4)))) {
    cVar1 = *(char *)(param_2 + 0xc1);
    if (cVar1 != '\0') {
      uVar4 = *(uint *)(param_3 + 0x18);
      uVar2 = *(uint *)(param_3 + 0x1c);
      if (uVar4 - uVar2 < 5) {
        local_25 = 0x48;
        local_24 = 0;
        FUN_01328914(&local_38,param_3,&local_25,1);
        if (local_38 != 4) goto LAB_012fc5c4;
      }
      else {
        if (uVar4 < uVar2) goto LAB_012fc5d8;
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 0x48;
        *(uint *)(param_3 + 0x1c) = uVar2 + 1;
      }
      FUN_0132901c(&local_38,param_3,cVar1,0);
      if (local_38 != 4) goto LAB_012fc5c4;
    }
    if (*(char *)(param_2 + 0x2c) != '\0') {
      uVar7 = *(undefined4 *)(param_2 + 0x24);
      uVar5 = *(undefined4 *)(param_2 + 0x28);
      uVar4 = *(uint *)(param_3 + 0x18);
      uVar2 = *(uint *)(param_3 + 0x1c);
      if (uVar4 - uVar2 < 5) {
        local_40 = 0x5a;
        uStack_3c = uStack_3c & 0xffffff00;
        FUN_01328914(&local_38,param_3,&local_40,1);
        if (local_38 != 4) goto LAB_012fc5c4;
      }
      else {
        if (uVar4 < uVar2) {
LAB_012fc5d8:
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar2,uVar4,uVar4,&DAT_0188fa90);
        }
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 0x5a;
        *(uint *)(param_3 + 0x1c) = uVar2 + 1;
      }
      FUN_01328ef8(&local_38,param_3,uVar5);
      if ((local_38 != 4) || (FUN_01328914(&local_38,param_3,uVar7,uVar5), local_38 != 4))
      goto LAB_012fc5c4;
    }
    if ((((((*(byte *)(param_2 + 0xbb) == 2) ||
           (FUN_01329168(&local_38,param_3,0x10,*(byte *)(param_2 + 0xbb) & 1), local_38 == 4)) &&
          (((*(byte *)(param_2 + 0xbc) == 2 ||
            (FUN_01329168(&local_38,param_3,0x11,*(byte *)(param_2 + 0xbc) & 1), local_38 == 4)) &&
           ((*(byte *)(param_2 + 0xbd) == 2 ||
            (FUN_01329168(&local_38,param_3,0x12,*(byte *)(param_2 + 0xbd) & 1), local_38 == 4))))))
         && ((((*(byte *)(param_2 + 0xbe) == 2 ||
               (FUN_01329168(&local_38,param_3,0x2a,*(byte *)(param_2 + 0xbe) & 1), local_38 == 4))
              && ((*(byte *)(param_2 + 0xbf) == 2 ||
                  (FUN_01329168(&local_38,param_3,0x17,*(byte *)(param_2 + 0xbf) & 1), local_38 == 4
                  )))) &&
             (((*(byte *)(param_2 + 0xc0) == 2 ||
               (FUN_01329168(&local_38,param_3,0x1f,*(byte *)(param_2 + 0xc0) & 1), local_38 == 4))
              && ((*(char *)(param_2 + 0x3c) == '\0' ||
                  (FUN_013292d8(&local_38,param_3,0x24,*(undefined4 *)(param_2 + 0x34),
                                *(undefined4 *)(param_2 + 0x38)), local_38 == 4)))))))) &&
        ((((*(char *)(param_2 + 0x4c) == '\0' ||
           (FUN_013292d8(&local_38,param_3,0x25,*(undefined4 *)(param_2 + 0x44),
                         *(undefined4 *)(param_2 + 0x48)), local_38 == 4)) &&
          ((*(char *)(param_2 + 0x5c) == '\0' ||
           (FUN_013292d8(&local_38,param_3,0x27,*(undefined4 *)(param_2 + 0x54),
                         *(undefined4 *)(param_2 + 0x58)), local_38 == 4)))) &&
         ((*(char *)(param_2 + 0x6c) == '\0' ||
          (FUN_013292d8(&local_38,param_3,0x28,*(undefined4 *)(param_2 + 100),
                        *(undefined4 *)(param_2 + 0x68)), local_38 == 4)))))) &&
       (((*(char *)(param_2 + 0x7c) == '\0' ||
         (FUN_013292d8(&local_38,param_3,0x29,*(undefined4 *)(param_2 + 0x74),
                       *(undefined4 *)(param_2 + 0x78)), local_38 == 4)) &&
        (((*(char *)(param_2 + 0x8c) == '\0' ||
          (FUN_013292d8(&local_38,param_3,0x2c,*(undefined4 *)(param_2 + 0x84),
                        *(undefined4 *)(param_2 + 0x88)), local_38 == 4)) &&
         ((*(char *)(param_2 + 0x9c) == '\0' ||
          (FUN_013292d8(&local_38,param_3,0x2d,*(undefined4 *)(param_2 + 0x94),
                        *(undefined4 *)(param_2 + 0x98)), local_38 == 4)))))))) {
      uVar8 = FUN_0132bb74(param_2 + 0xa0);
      iVar3 = (int)((ulonglong)uVar8 >> 0x20);
      iVar6 = (int)uVar8;
      if (iVar6 != iVar3) {
        do {
          FUN_01328ef8(&local_38,param_3,0x1f3a);
          if (((local_38 != 4) ||
              (FUN_01328ef8(&local_38,param_3,*(undefined4 *)(iVar6 + 0x74)), local_38 != 4)) ||
             (FUN_012fb034(&local_38,iVar6,param_3), local_38 != 4)) goto LAB_012fc5c4;
          iVar6 = iVar6 + 0x78;
        } while (iVar6 != iVar3);
      }
      FUN_01328b10(&local_38,param_3,*(undefined4 *)(param_2 + 0xb0));
      if (local_38 == 4) {
        *param_1 = 4;
        return;
      }
    }
  }
LAB_012fc5c4:
  param_1[1] = local_34;
  *param_1 = local_38;
  param_1[2] = local_30;
  return;
}

