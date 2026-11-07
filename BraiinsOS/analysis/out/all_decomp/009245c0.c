// FUN_009245c0 @ 009245c0 size=516 calls_out=4 calls_in=3
// strings: 

void FUN_009245c0(undefined1 *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_1c [3];
  
  uVar6 = *(uint *)(param_2 + 0x10);
  uVar5 = *(uint *)(param_2 + 0x14);
  if (uVar5 < uVar6) {
    iVar4 = *(int *)(param_2 + 0xc);
    do {
      uVar7 = (uint)*(byte *)(iVar4 + uVar5);
      if ((0x17 < uVar7 - 9) || ((1 << (uVar7 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar7 == 0x66) {
          uVar8 = uVar5 + 1;
          *(uint *)(param_2 + 0x14) = uVar8;
          uVar7 = uVar6;
          if (uVar8 >= uVar6 && uVar8 != uVar6) {
            uVar7 = uVar8;
          }
          if (uVar8 < uVar6) {
            cVar1 = *(char *)(iVar4 + uVar8);
            uVar6 = uVar5 + 2;
            *(uint *)(param_2 + 0x14) = uVar6;
            if (cVar1 != 'a') goto LAB_00924774;
            if (uVar6 != uVar7) {
              cVar1 = *(char *)(iVar4 + uVar6);
              uVar6 = uVar5 + 3;
              *(uint *)(param_2 + 0x14) = uVar6;
              if (cVar1 != 'l') goto LAB_00924774;
              if (uVar6 != uVar7) {
                cVar1 = *(char *)(iVar4 + uVar6);
                uVar6 = uVar5 + 4;
                *(uint *)(param_2 + 0x14) = uVar6;
                if (cVar1 != 's') goto LAB_00924774;
                if (uVar6 != uVar7) {
                  cVar1 = *(char *)(iVar4 + uVar6);
                  *(uint *)(param_2 + 0x14) = uVar5 + 5;
                  uVar3 = 0;
                  goto joined_r0x00924724;
                }
              }
            }
          }
LAB_0092473c:
          local_1c[0] = 5;
        }
        else {
          if (uVar7 != 0x74) {
            uVar2 = FUN_005b8238(param_2,local_1c,&DAT_01867c68);
            uVar2 = FUN_00e959bc(uVar2,param_2);
            *(undefined4 *)(param_1 + 4) = uVar2;
            *param_1 = 1;
            return;
          }
          uVar8 = uVar5 + 1;
          *(uint *)(param_2 + 0x14) = uVar8;
          uVar7 = uVar6;
          if (uVar6 < uVar8) {
            uVar7 = uVar8;
          }
          if (uVar6 <= uVar8) goto LAB_0092473c;
          cVar1 = *(char *)(iVar4 + uVar8);
          uVar6 = uVar5 + 2;
          *(uint *)(param_2 + 0x14) = uVar6;
          if (cVar1 == 'r') {
            if (uVar6 == uVar7) goto LAB_0092473c;
            cVar1 = *(char *)(iVar4 + uVar6);
            uVar6 = uVar5 + 3;
            *(uint *)(param_2 + 0x14) = uVar6;
            if (cVar1 == 'u') {
              if (uVar6 == uVar7) goto LAB_0092473c;
              cVar1 = *(char *)(iVar4 + uVar6);
              *(uint *)(param_2 + 0x14) = uVar5 + 4;
              uVar3 = 1;
joined_r0x00924724:
              if (cVar1 == 'e') {
                param_1[1] = uVar3;
                *param_1 = 0;
                return;
              }
            }
          }
LAB_00924774:
          local_1c[0] = 9;
        }
        uVar2 = FUN_005b8c9c(param_2,local_1c);
        goto LAB_00924758;
      }
      uVar5 = uVar5 + 1;
      *(uint *)(param_2 + 0x14) = uVar5;
    } while (uVar6 != uVar5);
  }
  local_1c[0] = 5;
  uVar2 = FUN_008f9984(param_2,local_1c);
LAB_00924758:
  *(undefined4 *)(param_1 + 4) = uVar2;
  *param_1 = 1;
  return;
}

