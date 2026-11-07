// FUN_006453d0 @ 006453d0 size=1044 calls_out=2 calls_in=2
// strings: 

uint FUN_006453d0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  if (*(int *)(param_1 + 0x158) == -0x80000000 || *(int *)(param_2 + 0x158) == -0x80000000) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x158) != -0x80000000 || *(int *)(param_2 + 0x158) != -0x80000000)
    goto LAB_00645550;
  }
  else {
    uVar4 = 0;
    if ((*(int *)(param_1 + 0x160) != *(int *)(param_2 + 0x160)) ||
       (iVar1 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + 0x15c),*(undefined4 *)(param_2 + 0x15c)
                                  ), iVar1 != 0)) goto LAB_00645550;
  }
  if (*(int *)(param_1 + 0x164) == -0x80000000 || *(int *)(param_2 + 0x164) == -0x80000000) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x164) != -0x80000000 || *(int *)(param_2 + 0x164) != -0x80000000)
    goto LAB_00645550;
  }
  else {
    uVar4 = 0;
    if ((*(int *)(param_1 + 0x16c) != *(int *)(param_2 + 0x16c)) ||
       (iVar1 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + 0x168),*(undefined4 *)(param_2 + 0x168)
                                  ), iVar1 != 0)) goto LAB_00645550;
  }
  if (*(int *)(param_1 + 0x170) == -0x80000000 || *(int *)(param_2 + 0x170) == -0x80000000) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x170) != -0x80000000 || *(int *)(param_2 + 0x170) != -0x80000000)
    goto LAB_00645550;
  }
  else {
    uVar4 = 0;
    if ((*(int *)(param_1 + 0x178) != *(int *)(param_2 + 0x178)) ||
       (iVar1 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + 0x174),*(undefined4 *)(param_2 + 0x174)
                                  ), iVar1 != 0)) goto LAB_00645550;
  }
  uVar4 = 0;
  if (*(int *)(param_1 + 0x150) == 1) {
    if ((*(int *)(param_2 + 0x150) == 0) || (*(int *)(param_1 + 0x154) != *(int *)(param_2 + 0x154))
       ) goto LAB_00645550;
  }
  else if (*(int *)(param_2 + 0x150) != 0) goto LAB_00645550;
  iVar1 = FUN_00644834(param_1,param_2);
  if (iVar1 != 0) {
    uVar4 = *(uint *)(param_1 + 0xdc);
    uVar3 = *(uint *)(param_2 + 0xd8);
    uVar2 = *(uint *)(param_1 + 0xd8) ^ 2 | uVar4;
    if (uVar2 != 0) {
      uVar4 = uVar3 ^ 2;
    }
    if (uVar2 != 0 && (uVar4 != 0 || *(int *)(param_2 + 0xdc) != 0)) {
      if ((*(char *)(param_2 + 0xf0) == *(char *)(param_1 + 0xf0)) &&
         (*(char *)(param_2 + 0xf1) == *(char *)(param_1 + 0xf1))) {
        if (*(int *)(param_1 + 0xe8) == 1) {
          if ((*(int *)(param_2 + 0xe8) != 0) &&
             (*(int *)(param_1 + 0xec) == *(int *)(param_2 + 0xec))) {
LAB_006455ac:
            if ((*(uint *)(param_1 + 0xd8) & 1) == 0) {
              if ((uVar3 & 1) == 0) goto LAB_006455dc;
            }
            else if (((uVar3 & 1) != 0) &&
                    (*(double *)(param_1 + 0xe0) == *(double *)(param_2 + 0xe0))) {
LAB_006455dc:
              uVar4 = *(uint *)(param_1 + 0xfc);
              uVar3 = *(uint *)(param_2 + 0xf8);
              uVar2 = *(uint *)(param_1 + 0xf8) ^ 2 | uVar4;
              if (uVar2 != 0) {
                uVar4 = uVar3 ^ 2;
              }
              if (uVar2 != 0 && (uVar4 != 0 || *(int *)(param_2 + 0xfc) != 0)) {
                if (*(char *)(param_2 + 0x138) == *(char *)(param_1 + 0x138)) {
                  if (*(int *)(param_1 + 0x118) == 1) {
                    if ((*(int *)(param_2 + 0x118) != 0) &&
                       (*(int *)(param_1 + 0x11c) == *(int *)(param_2 + 0x11c))) {
LAB_006456b0:
                      if (*(int *)(param_1 + 0x120) == 1) {
                        if ((*(int *)(param_2 + 0x120) != 0) &&
                           (*(int *)(param_1 + 0x124) == *(int *)(param_2 + 0x124))) {
LAB_006456e4:
                          if ((*(uint *)(param_1 + 0xf8) & 1) == 0) {
                            if ((uVar3 & 1) == 0) goto LAB_0064571c;
                          }
                          else if (((uVar3 & 1) != 0) &&
                                  (*(double *)(param_1 + 0x100) == *(double *)(param_2 + 0x100))) {
LAB_0064571c:
                            if ((*(uint *)(param_1 + 0x108) & 1) == 0) {
                              if (*(int *)(param_2 + 0x108) == 0) goto LAB_00645754;
                            }
                            else if ((*(int *)(param_2 + 0x108) != 0) &&
                                    (*(double *)(param_1 + 0x110) == *(double *)(param_2 + 0x110)))
                            {
LAB_00645754:
                              if (*(char *)(param_2 + 0x139) == *(char *)(param_1 + 0x139)) {
                                if (*(int *)(param_1 + 0x128) == 1) {
                                  if ((*(int *)(param_2 + 0x128) != 0) &&
                                     (*(float *)(param_1 + 300) == *(float *)(param_2 + 300))) {
LAB_0064579c:
                                    if (*(char *)(param_2 + 0x13a) == *(char *)(param_1 + 0x13a)) {
                                      if (*(int *)(param_1 + 0x130) == 1) {
                                        if ((*(int *)(param_2 + 0x130) != 0) &&
                                           (*(int *)(param_1 + 0x134) == *(int *)(param_2 + 0x134)))
                                        {
LAB_00645608:
                                          uVar3 = *(uint *)(param_1 + 0x140);
                                          uVar2 = *(uint *)(param_2 + 0x140);
                                          uVar4 = (uint)(uVar3 == 2 && uVar2 == 2);
                                          if (uVar3 == 2 || uVar2 == 2) goto LAB_00645550;
                                          if (*(char *)(param_2 + 0x148) ==
                                              *(char *)(param_1 + 0x148)) {
                                            if ((uVar3 & 1) == 0) {
                                              uVar4 = uVar2 ^ 1;
                                            }
                                            else {
                                              uVar4 = 0;
                                              if ((uVar2 & 1) != 0) {
                                                uVar4 = (uint)(*(int *)(param_1 + 0x144) ==
                                                              *(int *)(param_2 + 0x144));
                                              }
                                            }
                                            goto LAB_00645550;
                                          }
                                        }
                                      }
                                      else if (*(int *)(param_2 + 0x130) == 0) goto LAB_00645608;
                                    }
                                  }
                                }
                                else if (*(int *)(param_2 + 0x128) == 0) goto LAB_0064579c;
                              }
                            }
                          }
                        }
                      }
                      else if (*(int *)(param_2 + 0x120) == 0) goto LAB_006456e4;
                    }
                  }
                  else if (*(int *)(param_2 + 0x118) == 0) goto LAB_006456b0;
                }
              }
              else {
                bVar5 = uVar2 == 0;
                if (bVar5) {
                  uVar2 = uVar3 ^ 2;
                }
                if (bVar5 && (uVar2 == 0 && *(int *)(param_2 + 0xfc) == 0)) goto LAB_00645608;
              }
            }
          }
        }
        else if (*(int *)(param_2 + 0xe8) == 0) goto LAB_006455ac;
      }
    }
    else {
      bVar5 = uVar2 == 0;
      if (bVar5) {
        uVar2 = uVar3 ^ 2;
      }
      if (bVar5 && (uVar2 == 0 && *(int *)(param_2 + 0xdc) == 0)) goto LAB_006455dc;
    }
  }
  uVar4 = 0;
LAB_00645550:
  return uVar4 & 1;
}

