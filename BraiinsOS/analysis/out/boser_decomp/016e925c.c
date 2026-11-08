// FUN_016e925c @ 016e925c size=292 calls_out=0 calls_in=1
// strings: 

void FUN_016e925c(char *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  
  uVar6 = *(undefined4 *)(param_2 + 0x10);
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 0x14);
  *(undefined4 *)param_1 = uVar6;
  if (param_4 == 0) {
    cVar10 = '\x02';
    cVar9 = '\x02';
    cVar8 = '\x02';
    cVar12 = '\x02';
    cVar11 = '\x02';
    cVar4 = *param_1;
  }
  else {
    cVar2 = '\x01';
    cVar11 = '\x02';
    param_4 = param_4 * 0x1c;
    cVar12 = '\x02';
    cVar8 = '\x02';
    cVar9 = '\x02';
    cVar10 = '\x02';
    cVar4 = '\x02';
    puVar7 = (undefined1 *)(param_3 + 0x18);
    do {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*puVar7) {
      case 0:
        cVar4 = cVar2;
        break;
      case 1:
        cVar11 = cVar2;
        break;
      case 2:
        cVar12 = cVar2;
        break;
      case 3:
        cVar8 = cVar2;
        break;
      case 4:
        cVar9 = cVar2;
        break;
      case 5:
        cVar10 = cVar2;
        break;
      case 7:
        cVar2 = '\0';
      }
      param_4 = param_4 + -0x1c;
      puVar7 = puVar7 + 0x1c;
    } while (param_4 != 0);
    if (cVar4 == '\x02') {
      cVar4 = *param_1;
    }
  }
  *(char *)(param_2 + 0x10) = cVar4;
  cVar4 = param_1[1];
  cVar2 = param_1[2];
  cVar3 = param_1[3];
  cVar5 = param_1[4];
  cVar1 = param_1[5];
  if (cVar10 != '\x02') {
    cVar1 = cVar10;
  }
  *(char *)(param_2 + 0x15) = cVar1;
  if (cVar9 != '\x02') {
    cVar5 = cVar9;
  }
  if (cVar8 != '\x02') {
    cVar3 = cVar8;
  }
  if (cVar12 != '\x02') {
    cVar2 = cVar12;
  }
  if (cVar11 != '\x02') {
    cVar4 = cVar11;
  }
  *(char *)(param_2 + 0x14) = cVar5;
  *(char *)(param_2 + 0x13) = cVar3;
  *(char *)(param_2 + 0x12) = cVar2;
  *(char *)(param_2 + 0x11) = cVar4;
  return;
}

