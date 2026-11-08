// FUN_0183870c @ 0183870c size=1136 calls_out=1 calls_in=3
// strings: 

undefined8 FUN_0183870c(int param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (param_3 == 0) {
    return CONCAT44(param_2,param_1);
  }
  uVar1 = param_1 + 0x3fU & 0xffffffc0;
  iVar6 = *(int *)(uVar1 + 0x48);
  if (iVar6 == 0) {
    if (0xf < param_3) goto LAB_018388d4;
  }
  else {
    uVar3 = 0x10U - iVar6;
    if (param_3 <= 0x10U - iVar6) {
      uVar3 = param_3;
    }
    if (uVar3 != 0) {
      if (uVar3 - 1 < 6) {
        *(undefined1 *)(uVar1 + iVar6 + 0x38) = *(undefined1 *)param_2;
        if ((uVar3 != 1) &&
           (*(undefined1 *)(uVar1 + iVar6 + 0x39) = *(undefined1 *)((int)param_2 + 1), uVar3 != 2))
        goto LAB_01838a90;
      }
      else {
        iVar4 = iVar6 + uVar1;
        if ((uint)(iVar4 + (0x37 - (int)param_2)) < 3) {
          *(undefined1 *)(iVar4 + 0x38) = *(undefined1 *)param_2;
          *(undefined1 *)(iVar4 + 0x39) = *(undefined1 *)((int)param_2 + 1);
LAB_01838a90:
          iVar4 = iVar6 + uVar1;
          *(undefined1 *)(iVar4 + 0x3a) = *(undefined1 *)((int)param_2 + 2);
          if ((((((uVar3 != 3) &&
                 (*(undefined1 *)(iVar4 + 0x3b) = *(undefined1 *)((int)param_2 + 3), uVar3 != 4)) &&
                (*(undefined1 *)(iVar4 + 0x3c) = *(undefined1 *)(param_2 + 1), uVar3 != 5)) &&
               (((*(undefined1 *)(iVar4 + 0x3d) = *(undefined1 *)((int)param_2 + 5), uVar3 != 6 &&
                 (*(undefined1 *)(iVar4 + 0x3e) = *(undefined1 *)((int)param_2 + 6), uVar3 != 7)) &&
                ((*(undefined1 *)(iVar4 + 0x3f) = *(undefined1 *)((int)param_2 + 7), uVar3 != 8 &&
                 ((*(undefined1 *)(iVar4 + 0x40) = *(undefined1 *)(param_2 + 2), uVar3 != 9 &&
                  (*(undefined1 *)(iVar4 + 0x41) = *(undefined1 *)((int)param_2 + 9), uVar3 != 10)))
                 ))))) &&
              ((*(undefined1 *)(iVar4 + 0x42) = *(undefined1 *)((int)param_2 + 10), uVar3 != 0xb &&
               (((*(undefined1 *)(iVar4 + 0x43) = *(undefined1 *)((int)param_2 + 0xb), uVar3 != 0xc
                 && (*(undefined1 *)(iVar4 + 0x44) = *(undefined1 *)(param_2 + 3), uVar3 != 0xd)) &&
                (*(undefined1 *)(iVar4 + 0x45) = *(undefined1 *)((int)param_2 + 0xd), uVar3 != 0xe))
               )))) && (*(undefined1 *)(iVar4 + 0x46) = *(undefined1 *)((int)param_2 + 0xe),
                       uVar3 != 0xf)) {
            *(undefined1 *)(iVar4 + 0x47) = *(undefined1 *)((int)param_2 + 0xf);
          }
        }
        else {
          *(undefined4 *)(iVar4 + 0x38) = *param_2;
          uVar2 = uVar3 >> 2;
          if (uVar2 == 1) {
            uVar5 = 5;
            *(undefined1 *)(iVar4 + 0x3c) = *(undefined1 *)(param_2 + 1);
            uVar2 = 4;
LAB_018387e0:
            uVar2 = uVar2 + 2;
            *(undefined1 *)(iVar4 + uVar5 + 0x38) = *(undefined1 *)((int)param_2 + uVar5);
            if (uVar2 < uVar3) {
              *(undefined1 *)(iVar4 + uVar2 + 0x38) = *(undefined1 *)((int)param_2 + uVar2);
            }
          }
          else {
            *(undefined4 *)(iVar4 + 0x3c) = param_2[1];
            if ((uVar2 != 2) && (*(undefined4 *)(iVar4 + 0x40) = param_2[2], uVar2 != 3)) {
              *(undefined4 *)(iVar4 + 0x44) = param_2[3];
            }
            if ((uVar3 & 3) != 0) {
              uVar2 = uVar3 & 0xfffffffc;
              uVar5 = uVar2 + 1;
              *(undefined1 *)(iVar4 + uVar2 + 0x38) = *(undefined1 *)((int)param_2 + uVar2);
              if (uVar5 < uVar3) goto LAB_018387e0;
            }
          }
        }
      }
    }
    param_3 = param_3 - uVar3;
    param_2 = (undefined4 *)((int)param_2 + uVar3);
    *(uint *)(uVar1 + 0x48) = iVar6 + uVar3;
    if (iVar6 + uVar3 == 0x10) {
      FUN_0183802c(uVar1,uVar1 + 0x38);
      *(undefined4 *)(uVar1 + 0x48) = 0;
    }
    if (0xf < param_3) {
LAB_018388d4:
      FUN_0183802c(uVar1,param_2);
      param_2 = (undefined4 *)((int)param_2 + (param_3 & 0xfffffff0));
      param_3 = param_3 & 0xf;
    }
    if (param_3 == 0) {
      return 0;
    }
  }
  if (param_3 - 1 < 6) {
    *(undefined1 *)(uVar1 + 0x38) = *(undefined1 *)param_2;
    if ((param_3 == 1) ||
       (*(undefined1 *)(uVar1 + 0x39) = *(undefined1 *)((int)param_2 + 1), param_3 == 2))
    goto LAB_018388b4;
  }
  else {
    if (2 < (uVar1 + 0x37) - (int)param_2) {
      *(undefined4 *)(uVar1 + 0x38) = *param_2;
      if (param_3 >> 2 == 1) {
        uVar3 = 5;
        uVar2 = 4;
        *(undefined1 *)(uVar1 + 0x3c) = *(undefined1 *)(param_2 + 1);
      }
      else {
        *(undefined4 *)(uVar1 + 0x3c) = param_2[1];
        if (param_3 >> 2 == 3) {
          *(undefined4 *)(uVar1 + 0x40) = param_2[2];
        }
        if ((param_3 & 3) == 0) goto LAB_018388b4;
        uVar2 = param_3 & 0xfffffffc;
        uVar3 = uVar2 + 1;
        *(undefined1 *)(uVar1 + uVar2 + 0x38) = *(undefined1 *)((int)param_2 + uVar2);
        if (param_3 <= uVar3) goto LAB_018388b4;
      }
      uVar2 = uVar2 + 2;
      *(undefined1 *)(uVar1 + uVar3 + 0x38) = *(undefined1 *)((int)param_2 + uVar3);
      if (uVar2 < param_3) {
        *(undefined1 *)(uVar1 + uVar2 + 0x38) = *(undefined1 *)((int)param_2 + uVar2);
      }
      goto LAB_018388b4;
    }
    *(undefined1 *)(uVar1 + 0x38) = *(undefined1 *)param_2;
    *(undefined1 *)(uVar1 + 0x39) = *(undefined1 *)((int)param_2 + 1);
  }
  *(undefined1 *)(uVar1 + 0x3a) = *(undefined1 *)((int)param_2 + 2);
  if (((((((param_3 != 3) &&
          (*(undefined1 *)(uVar1 + 0x3b) = *(undefined1 *)((int)param_2 + 3), param_3 != 4)) &&
         (*(undefined1 *)(uVar1 + 0x3c) = *(undefined1 *)(param_2 + 1), param_3 != 5)) &&
        ((*(undefined1 *)(uVar1 + 0x3d) = *(undefined1 *)((int)param_2 + 5), param_3 != 6 &&
         (*(undefined1 *)(uVar1 + 0x3e) = *(undefined1 *)((int)param_2 + 6), param_3 != 7)))) &&
       ((*(undefined1 *)(uVar1 + 0x3f) = *(undefined1 *)((int)param_2 + 7), param_3 != 8 &&
        ((*(undefined1 *)(uVar1 + 0x40) = *(undefined1 *)(param_2 + 2), param_3 != 9 &&
         (*(undefined1 *)(uVar1 + 0x41) = *(undefined1 *)((int)param_2 + 9), param_3 != 10)))))) &&
      (*(undefined1 *)(uVar1 + 0x42) = *(undefined1 *)((int)param_2 + 10), param_3 != 0xb)) &&
     (((*(undefined1 *)(uVar1 + 0x43) = *(undefined1 *)((int)param_2 + 0xb), param_3 != 0xc &&
       (*(undefined1 *)(uVar1 + 0x44) = *(undefined1 *)(param_2 + 3), param_3 != 0xd)) &&
      (*(undefined1 *)(uVar1 + 0x45) = *(undefined1 *)((int)param_2 + 0xd), param_3 == 0xf)))) {
    *(undefined1 *)(uVar1 + 0x46) = *(undefined1 *)((int)param_2 + 0xe);
  }
LAB_018388b4:
  *(uint *)(uVar1 + 0x48) = param_3;
  return 0;
}

