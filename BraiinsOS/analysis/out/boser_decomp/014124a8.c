// FUN_014124a8 @ 014124a8 size=888 calls_out=5 calls_in=3
// strings: 

void FUN_014124a8(undefined1 *param_1,char *param_2,uint param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined3 uStack_1c;
  
  switch(param_3) {
  case 0:
    goto switchD_014124cc_caseD_0;
  default:
    if (param_3 < 0xf) break;
    FUN_012844f4(&local_38,param_3);
    uVar2 = local_34;
    iVar4 = FUN_01412858(param_2,param_3,local_34,local_30);
    if (iVar4 == 0) {
      local_28 = local_38;
      local_24 = local_34;
      uStack_20 = local_30;
      uVar7 = FUN_01284400();
      *(undefined8 *)(param_1 + 4) = uVar7;
      uVar3 = 10;
      goto LAB_014127ac;
    }
    FUN_0134bd64(local_38,uVar2);
    goto switchD_014124cc_caseD_0;
  case 3:
    if (*param_2 == 'G') {
      cVar1 = param_2[1];
      bVar5 = cVar1 == 'E';
      if (bVar5) {
        cVar1 = param_2[2];
      }
      if (bVar5 && cVar1 == 'T') {
        uVar3 = 1;
        goto LAB_014127ac;
      }
    }
    else if (*param_2 == 'P') {
      cVar1 = param_2[1];
      bVar5 = cVar1 == 'U';
      if (bVar5) {
        cVar1 = param_2[2];
      }
      if (bVar5 && cVar1 == 'T') {
        uVar3 = 3;
        goto LAB_014127ac;
      }
    }
    param_3 = 3;
    break;
  case 4:
    cVar1 = *param_2;
    if (cVar1 == 'H') {
      cVar1 = param_2[1];
      bVar5 = cVar1 == 'E';
      if (bVar5) {
        cVar1 = param_2[2];
      }
      if ((bVar5 && cVar1 == 'A') && (param_2[3] == 'D')) {
        uVar3 = 5;
        goto LAB_014127ac;
      }
    }
    else {
      bVar5 = cVar1 == 'P';
      if (bVar5) {
        cVar1 = param_2[1];
      }
      if (bVar5 && cVar1 == 'O') {
        cVar1 = param_2[2];
        bVar5 = cVar1 == 'S';
        if (bVar5) {
          cVar1 = param_2[3];
        }
        if (bVar5 && cVar1 == 'T') {
          uVar3 = 2;
          goto LAB_014127ac;
        }
      }
    }
    param_3 = 4;
    break;
  case 5:
    if (*param_2 == 'P') {
      cVar1 = param_2[1];
      bVar5 = cVar1 == 'A';
      if (bVar5) {
        cVar1 = param_2[2];
      }
      if (bVar5 && cVar1 == 'T') {
        cVar1 = param_2[3];
        bVar5 = cVar1 == 'C';
        if (bVar5) {
          cVar1 = param_2[4];
        }
        if (bVar5 && cVar1 == 'H') {
          uVar3 = 8;
          goto LAB_014127ac;
        }
      }
    }
    else if (*param_2 == 'T') {
      cVar1 = param_2[1];
      bVar5 = cVar1 == 'R';
      if (bVar5) {
        cVar1 = param_2[2];
      }
      if (bVar5 && cVar1 == 'A') {
        cVar1 = param_2[3];
        bVar5 = cVar1 == 'C';
        if (bVar5) {
          cVar1 = param_2[4];
        }
        if (bVar5 && cVar1 == 'E') {
          uVar3 = 6;
          goto LAB_014127ac;
        }
      }
    }
    param_3 = 5;
    break;
  case 6:
    cVar1 = *param_2;
    bVar5 = cVar1 == 'D';
    if (bVar5) {
      cVar1 = param_2[1];
    }
    bVar6 = bVar5 && cVar1 == 'E';
    if (bVar5 && cVar1 == 'E') {
      bVar6 = param_2[2] == 'L';
    }
    if ((bVar6) && (param_2[3] == 'E')) {
      cVar1 = param_2[4];
      bVar5 = cVar1 == 'T';
      if (bVar5) {
        cVar1 = param_2[5];
      }
      if (bVar5 && cVar1 == 'E') {
        uVar3 = 4;
        goto LAB_014127ac;
      }
    }
    param_3 = 6;
    break;
  case 7:
    if (*param_2 == 'C') {
      cVar1 = param_2[1];
      bVar5 = cVar1 == 'O';
      if (bVar5) {
        cVar1 = param_2[2];
      }
      if (bVar5 && cVar1 == 'N') {
        cVar1 = param_2[3];
        bVar5 = cVar1 == 'N';
        if (bVar5) {
          cVar1 = param_2[4];
        }
        if (bVar5 && cVar1 == 'E') {
          cVar1 = param_2[5];
          bVar5 = cVar1 == 'C';
          if (bVar5) {
            cVar1 = param_2[6];
          }
          if (bVar5 && cVar1 == 'T') {
            uVar3 = 7;
            goto LAB_014127ac;
          }
        }
      }
    }
    else if (*param_2 == 'O') {
      cVar1 = param_2[1];
      bVar5 = cVar1 == 'P';
      if (bVar5) {
        cVar1 = param_2[2];
      }
      if (bVar5 && cVar1 == 'T') {
        cVar1 = param_2[3];
        bVar5 = cVar1 == 'I';
        if (bVar5) {
          cVar1 = param_2[4];
        }
        if (bVar5 && cVar1 == 'O') {
          cVar1 = param_2[5];
          bVar5 = cVar1 == 'N';
          if (bVar5) {
            cVar1 = param_2[6];
          }
          if (bVar5 && cVar1 == 'S') {
            uVar3 = 0;
            goto LAB_014127ac;
          }
        }
      }
    }
    param_3 = 7;
  }
  uStack_1c = 0;
  uStack_20 = 0;
  local_24 = 0;
  local_28 = 0;
  iVar4 = FUN_01412858(param_2,param_3,&local_28,0xf);
  if (iVar4 == 0) {
    FUN_01bed4e2(param_1 + 1,&local_28,0xf);
    uVar3 = 9;
    param_1[0x10] = (char)param_3;
  }
  else {
switchD_014124cc_caseD_0:
    uVar3 = 0xb;
  }
LAB_014127ac:
  *param_1 = uVar3;
  return;
}

